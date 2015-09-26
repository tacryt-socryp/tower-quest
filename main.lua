

local Logger
local LBC
local tableutil
local PhotonTime
local photon

if pcall(require,"plugin.photon") then -- load photon plugin
    print("Demo: main module:","Corona plugin used")
    photon = require "plugin.photon"
    Logger = photon.common.Logger
    LBC = photon.loadbalancing.LoadBalancingClient
    tableutil = photon.common.util.tableutil
    PhotonTime = photon.common.util.time
else  -- load photon.lua module
    print("Demo: main module:","Lua lib used")
    photon = require("photon")
    Logger = require("photon.common.Logger")
    LBC = require("photon.loadbalancing.LoadBalancingClient")
    tableutil = require("photon.common.util.tableutil")
    PhotonTime = require("photon.common.util.time")
end

local widget = require("widget")
local uihelper = require("uihelper")

local _P = function(x) print(tableutil.toStringReq(x)) end

local textSize1 = display.pixelHeight * 3 / 100
local textSize2 = display.pixelHeight * 4 / 100
local inputSize = display.pixelHeight * 12 / 100
local buttonWidth = display.pixelWidth / 2 - 10
local buttonHeight = buttonWidth / 5
local rowHeight = textSize2 * 1.2

local const = {
    BgColor = 0xF0/255,
    GridColor = 0xB4/255,
    CheckerColor = 0xD2/255,
}

-- local canvasSize = math.min(display.pixelWidth, math.floor(display.pixelHeight / 1.4 ) )
local canvasSize = math.min(display.pixelWidth, display.pixelHeight)

local canvas = display.newRect(0, 0, canvasSize, canvasSize)
canvas.anchorX = 0
canvas.anchorY = 0

local desktop
canvas:setFillColor(const.BgColor)

local view = {
    cellWidth = 1,
    cellHeight = 1,
    logger = Logger.new("View"),
    scene = display.newGroup(),
    checker = display.newGroup(),
    grid = display.newGroup(),
    playerVisuals = {},
    playerVisualsGroup = display.newGroup(),
}

local stateText = display.newText("undef", 0, 0, canvasSize, 0, native.systemFont, textSize1)
local logText = display.newText("undef", 0, 0, canvasSize, 0, native.systemFont, textSize1)
logText:setFillColor(100/255)

local desktopAtMoveBegunY = nil
local moveDesktopButton = widget.newButton{
    label = ": : : : : :",
    width = display.pixelWidth, height = display.pixelHeight/10,
    fontSize = display.pixelHeight/20,
    onEvent = 
        function(event) 
            if "began" == event.phase then
                desktopAtMoveBegunY = desktop.y
            end
            if "moved" == event.phase and desktopAtMoveBegunY ~= nil and display.pixelHeight < desktop.height then
                desktop.y = desktopAtMoveBegunY + event.y - event.yStart
                desktop.y = math.min(desktop.y, 0)
                desktop.y = math.max(desktop.y, display.pixelHeight - desktop.height)
            end
            if "end" == event.phase then
                desktopAtMoveBegunY = nil
            end
        end       
}
moveDesktopButton:removeSelf() -- optional button

local newGameButton = widget.newButton{
    label = "New Game",
	fontSize = textSize2,
    width = buttonWidth, height = buttonHeight,
    onEvent = 
        function(event) 
            if "ended" == event.phase then
                if view.game:isInLobby() then
                    view.game:createParticleDemoRoom()
                end
            end
        end       
}
local leaveButton = widget.newButton{
    label = "Leave",
	fontSize = textSize2,
    width = buttonWidth, height = buttonHeight,
    onEvent = 
        function(event) 
            if "ended" == event.phase then
                view.game.autoconnect = false
                view.game:leaveRoom()
            end
        end    
}

local function onRoomListRowRender( event )
    local row = event.row
    local rowGroup = event.view

    row.textObj = display.newText( row, row.id, 0, 0, native.systemFont, textSize2 )
    row.textObj.anchorX = 0
    row.textObj.anchorY = 0
    if view.game:isConnectedToGame() and view.game:myRoom().name == row.id then
        row.textObj:setFillColor( 0 )
    else
        row.textObj:setFillColor( 100/255 )
    end
end

local function onRoomListRowTouch( event )
    if event.phase == "release" or event.phase == "tap" then
        if view.game:isInLobby() then
            local gameId = event.target.id
            view.logger:info("Join Game", gameId);
            view.game:joinRoom(gameId);
        end
    end
end

local roomList = widget.newTableView{
	width = boardSize,
	height = display.pixelHeight / 4,
	bottomPadding = 8,
	hideBackground = false,
	backgroundColor = { 1, 1, 1 },
    --listener = tableViewListener,
    onRowRender = onRoomListRowRender,
    onRowTouch = onRoomListRowTouch,
}

local gridSizeButton = widget.newButton{
    label = "Grid Size",
	fontSize = textSize2,
    width = buttonWidth, height = buttonHeight,
    onEvent = 
        function(event) 
            if "ended" == event.phase then
                view.game:nextGridSize()
                view:setupScene();
            end
        end    
}
local randomColorButton = widget.newButton{
    label = "Random Color",
	fontSize = textSize2,
    width = buttonWidth, height = buttonHeight,
    onEvent = 
        function(event) 
            if "ended" == event.phase then
                view.game:myActor():setRandomColor()
            end
        end
}

local automoveCheckBox = uihelper.newCheckBox("Automove:", false, textSize2, buttonWidth)
local useGrousCheckBox = uihelper.newCheckBox("Use Groups:", false, textSize2, buttonWidth)

local function setTextText(text, s)
    text.text = s
    text.anchorX = 0
    text.anchorY = 0
    text.x = 0
    text.y = 0
end
local function setPlayerText(text, p)
    setTextText(text, p.name .. "/" .. p.actorNr .. "\n" .. p:group())
end


view.logger:info("Display w =", display.pixelWidth, ", h =", display.pixelHeight, " , canvasSize =", canvasSize);

function view:setupPlayerVisual(nr)
    self:clearPlayerVisual(nr)
	local p = self.game:myRoomActors()[nr]
    if p then
        local scene = display.newGroup()
        self.playerVisualsGroup:insert(scene)

        local rect = display.newRect(scene, 1, 1 , self.cellWidth - 2, self.cellHeight - 2)
        rect.anchorX = 0
        rect.anchorY = 0
        rect:setFillColor(p.color[1]/255, p.color[2]/255, p.color[3]/255)
        if p.isLocal then
            rect.strokeWidth = 2
            rect:setStrokeColor(0, 1)
        end
        local text = display.newText(scene,"", 0, 0, native.systemFont, textSize1)
        text:setFillColor(0)
        setPlayerText(text, p)
        self.playerVisuals[nr] = {scene = scene, text = text, rect = rect}
    end
end

function view:clearAllPlayerVisuals()
	for nr, _ in pairs(self.playerVisuals) do
		self:clearPlayerVisual(nr)
	end
end

function view:clearPlayerVisual(nr)
    if self.playerVisuals[nr] then
        self.playerVisualsGroup:remove(self.playerVisuals[nr].scene)
        self.playerVisuals[nr] = nil
    end
end

function view:setupDesktop(movable)
    self.scene:insert(canvas)
    self.scene:insert(self.checker)
    self.scene:insert(self.grid)
    self.scene:insert(self.playerVisualsGroup)

    local panel = uihelper.newVertPanel()
    panel:add( stateText )
    panel:add( self.scene )
    
    if movable then
        panel:add( moveDesktopButton )
    end
    
    panel:addNewLine()
    panel:add( newGameButton )
    panel:add( leaveButton )
    panel:add( gridSizeButton )
    panel:add( randomColorButton )

    panel:addNewLine()
    panel:add( automoveCheckBox )
    panel:add( useGrousCheckBox )
    
    panel:addNewLine()
    local glg = display.newGroup()
    glg:insert(roomList)
    panel:add( glg )

    panel:addNewLine()
    panel:add( logText )
    
    return panel
end
    
function view:setupUI()
    self.logger:info("setupUI")
	display.setStatusBar(display.HiddenStatusBar)
    local tmp = self:setupDesktop()
    local movable = tmp.height > display.pixelHeight
    tmp:removeSelf()
    desktop = self:setupDesktop(movable)
    
    useGrousCheckBox.onChange = function(v)
        view.game:setUseGroups(v)
        self.checker.isVisible = v
    end
    automoveCheckBox.onChange = function(v)
        self.game.automove = v
    end
    useGrousCheckBox:set(self.game.useGroups)
    automoveCheckBox:set(self.game.automove)

    canvas:addEventListener( "touch", function(event)
        local x, y = canvas:contentToLocal(event.x, event.y)
        x = x + canvas.width / 2
        y = y + canvas.height / 2
        self.game:myActor():moveLocal(math.floor(x / self.cellWidth), math.floor(y / self.cellHeight))
    end )

end

function view:updateCellSize()
    self.logger:info("updateCellSize")
    local size = self.game:myRoom():gridSize()
    self.cellWidth = (canvasSize / size);
    self.cellHeight =(canvasSize / size);
	self:clearAllPlayerVisuals()
    for nr, _ in pairs(self.game:myRoomActors()) do
        self:setupPlayerVisual(nr)
    end
end

function view:drawChecker()
    while self.checker.numChildren > 0 do
        self.checker:remove(self.checker.numChildren)
    end

    local gridSize = self.game:myRoom():gridSize();
    local gpa = self.game:getGroupsPerAxis()

    for x = 0, gpa - 1 do
        for y = 0, gpa - 1 do
            if (x % 2) ~= (y % 2) then
                local x0 = self.cellWidth * math.ceil(x *  gridSize / gpa);
                local y0 = self.cellHeight * math.ceil(y * gridSize / gpa);
                local x1 = self.cellWidth * math.ceil((x + 1) * gridSize / gpa);
                local y1 = self.cellHeight * math.ceil((y + 1) * gridSize / gpa);

                local rect = display.newRect(self.checker, x0, y0, x1 - x0, y1 - y0)
		        rect.anchorX = 0
		        rect.anchorY = 0
                rect:setFillColor(const.CheckerColor)
            end
        end
    end

end

function view:drawGrid()
    while self.grid.numChildren > 0 do
        self.grid:remove(self.grid.numChildren)
    end

    local w = canvasSize;
    local h = canvasSize;
    -- grid.graphics.lineStyle(1, GridColor);
    for i = 0,self.game:myRoom():gridSize() do
        local x = i * self.cellWidth
        local y = i * self.cellHeight;
        local line1 = display.newLine(self.grid, x, 0, x, h)
        line1.strokeWidth = 2
        line1:setStrokeColor(const.GridColor)
        local line2 = display.newLine(self.grid, 0, y, w , y)
        line2.strokeWidth = 2
        line2:setStrokeColor(const.GridColor)
    end
    self.grid.visible = self.game.useGroups
end

function view:setupScene()
    self.logger:info("setupScene")

    self:updateCellSize();
    self:drawChecker();
    self:drawGrid();

	self:clearAllPlayerVisuals()
    for nr, _ in pairs(self.game:myRoomActors()) do
        self:setupPlayerVisual(nr)
    end
end

function view:scrollToCurrentRoom()
    if self.game:isConnectedToGame() then
        local index = 1
        for i = 1, roomList.numChildren do
            local r = roomList[i];
            if r.id == self.game:myRoom().name then
                roomList:scrollToIndex( index, 1000 )
            end
            index = index + 1
        end
    end
end

function view:onStateChange(state, info)
    stateText.text = LBC.StateToName(state)
    if info then
        stateText.text = stateText.text .. " " .. info
    end

    if self.game:isInLobby() then
        roomList.alpha = 1
    else
        roomList.alpha = 0.7
    end
    
    -- TODO: force rows rerender
    self:scrollToCurrentRoom()
end

function view:updateRoomButtons()
-- TODO: disable buttons
--    newGameButton.disabled = not ( self.game:isInLobby() )
--    leaveButton.disabled = not self.game:isConnectedToGame()
end

function view:addActor(a)
    self:setupPlayerVisual(a.actorNr)
end

function view:removeActor(a)
    self:clearPlayerVisual(a.actorNr)
end

function view:log(...)
    logText.text = self.logger:format( ... )
end

function view:onPlayerMove(p)
    local  v = self.playerVisuals[p.actorNr]
    if v then
        v.scene.x = p.x * self.cellWidth
        v.scene.y = p.y * self.cellHeight
        setPlayerText(v.text, p)
    end
    self.logger:info("onPlayerMove", p.actorNr, p.x, p.y, PhotonTime.timeFromStart())
end

function view:onPlayerAge(p, age)
--    local  v = self.playerVisuals[p.actorNr].scene
--    if v then
--        v.alpha = age
--    end
--    self.logger:info("onPlayerAge", p.actorNr, age)
end

function view:setPlayerColor(p)
    local  v = self.playerVisuals[p.actorNr]
    if v then
        v.rect:setFillColor(p.color[1]/255, p.color[2]/255, p.color[3]/255)
    end
end

function view:updateRoomListMenu(rooms)
    roomList:deleteAllRows()
    local names = {}
    for name, room in pairs(rooms) do
        table.insert(names, name)
    end
    table.sort(names)
    for _, name in ipairs(names) do
        roomList:insertRow{
            id = name,
            rowHeight = rowHeight,
            rowColor = { 255, 255, 255 },
            lineColor = { 220, 220, 220 },
        }
    end
    self:scrollToCurrentRoom()
    self.logger:info("updateRoomListMenu", rooms)
end

function view:updatePlayerList(players)
    self.logger:info("updatePlayerList", tableutil.toString(players))
end

function view:onChangeGroups(g)
    self.logger:info("onChangeGroups: ", g or "OFF")
end

view.game = require("ParticleClient")(view)
view.game:start()

timer.performWithDelay( 100, function() view.game:service1() end, 0)