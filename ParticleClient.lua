
local LoadBalancingClient
local LoadBalancingConstants
local Logger
local Array
local PhotonTime
local tableutil
local byteutil
local photon

if pcall(require,"plugin.photon") then -- try to load Corona photon plugin
	print("Demo: ParticleClient module:","Corona plugin used")
    photon = require "plugin.photon"    
    LoadBalancingClient = photon.loadbalancing.LoadBalancingClient
    LoadBalancingConstants = photon.loadbalancing.constants
    Logger = photon.common.Logger
    Array = photon.common.type.Array
    PhotonTime = photon.common.util.time
    tableutil = photon.common.util.tableutil
    byteutil = photon.common.util.byteutil
else  -- or load photon.lua module
	print("Demo: ParticleClient module:","Lua lib used")
    photon = require("photon")
    LoadBalancingClient = require("photon.loadbalancing.LoadBalancingClient")
    LoadBalancingConstants = require("photon.loadbalancing.constants")
    Logger = require("photon.common.Logger")
    Array = require("photon.common.type.Array")
    PhotonTime = require("photon.common.util.time")
    tableutil = require("photon.common.util.tableutil")
    byteutil = require("photon.common.util.byteutil")
end

local _P = function(x) print(tableutil.toStringReq(x)) end

math.randomseed( PhotonTime.timeFromStartMs() )

local appInfo = require("cloud-app-info")

local DemoConstants =
{
    EvColor = 1,
    EvPosition = 2,
    GridSizeProp = "s",

    MapProp = "m",

    MapType = { Forest = "Forest", Town = "Town", Sea = "Sea" },

    GroupsPerAxis  = 2,

    GridSizeDefault = 16,
    GridSizeMin = 4,
    GridSizeMax = 256,

    TickInterval = 0.500,

    LogLevel = Logger.Level.INFO,
}

local Util = {
    randomColor = function(from , to)
        if from == nil then from = 0 end
        if to == nil then to = 256 end
        local rnd = function() return math.floor(from + (to - from)*math.random()) end
        return {rnd(), rnd(), rnd(), 0}
    end
}

local function initRoom(loadBalancingClient, room)
    -- acceess properties every time
    function room:mapType()
        return self:getCustomPropertyOrElse(DemoConstants.MapProp, DemoConstants.MapType.Forest)
    end

    -- grid size cache
    room._gridSize = 0
    -- cached property value
    function room:gridSize() return self._gridSize end

    -- overrides
    function room:onPropertiesChange(changedCustomProps)
        -- optional: check if size prop in changedCustomProps
        self._gridSize = self:getCustomPropertyOrElse(DemoConstants.GridSizeProp, self._gridSize)
    end

    function room:setGridSize(value)
        self:setCustomProperty(DemoConstants.GridSizeProp, value)
    end

    room:setCustomProperty(DemoConstants.MapProp, DemoConstants.MapType.Forest)
    room:setCustomProperty(DemoConstants.GridSizeProp, DemoConstants.GridSizeDefault)
    room:setPropsListedInLobby(Array.new(DemoConstants.MapProp))

    return room
end

local function initActor(loadBalancingClient, actor)
    actor.game = loadBalancingClient

    actor.x = 0
    actor.y = 0
    actor.color = Util.randomColor(100)
    actor.lastUpdateTime = PhotonTime.timeFromStart()
    actor._group = 1


    function actor:setVisual(visual)
        self.visual = visual
    end

    function actor:setRandomColor()
--		self.game:requestLobbyStats({{"AAA"},{"BBB",0},{"BBB",1}});
--		self.game:findFriends({"pop", self.name})
        self:setColor(Util.randomColor(100))
        self:raiseColorEvent()
    end

    function actor:setColor(color)
        self.color = color
        self.game.view:setPlayerColor(self)
    end

    function actor:move(x, y)
        assert(type(x) == "number")
        assert(type(y) == "number")
        self.x = x
        self.y = y
        self._group = self:getGroupByPos()
        self.game.view:onPlayerMove(self)
        self.lastUpdateTime = PhotonTime.timeFromStart()
    end
    function actor:tick()
        if self.isLocal then
            self:tickLocal()
        else
            self:tickRemote()
        end
    end

    function actor:tickRemote()
        local t = PhotonTime.timeFromStart() - self.lastUpdateTime
        if t > 2.000 then
            self.game.view:onPlayerAge(self, math.max(0.1,( 2.000 + 5.000 - t) / 5.000))
        else
            self.game.view:onPlayerAge(self, 1)
        end
    end
    function actor:tickLocal()
        if self.game:isConnectedToGame() then
            if self:getRoom() then
                if self.game.automove then
                    local d = math.floor(math.random() * 8)
                    local s = self:getRoom():gridSize()
                    local xOffs = {-1, 0, 1, -1, 1, -1, 0, 1}
                    local yOffs = {1, 1, 1, 0, 0, -1, -1, -1 }
                    local x = self.x + xOffs[d + 1]
                    local y = self.y + yOffs[d + 1]
                    if x < 0 then x = 1 end
                    if x >= s then x = s - 2 end
                    if y < 0 then y = 1 end
                    if y >= s then y = s - 2 end
                    self:moveLocal(x, y)
                end
            end
        end
    end
    function actor:moveLocal(x, y)
        assert(type(x) == "number")
        assert(type(y) == "number")
        self.x = x
        self.y = y
        local newGroup = self:getGroupByPos()
        if newGroup ~= self._group then
            self._group = newGroup
            if self.game.useGroups then
                self.game:changeGroups({}, { self:group() })
                self.game.view:onChangeGroups(self:group())
            end
        end
        local opt = {}
        if self.game.useGroups then
            opt.interestGroup = self:group()
        end
        local options = {}
        if self.game.useGroups then
            options.interestGroup = self:group()
        end
        self:raiseEvent(DemoConstants.EvPosition, { [1] = Array["number"].new(self.x, self.y) }, options )

        self:move(x, y)
    end

    function actor:raiseColorEvent()
        local color = byteutil.array_to_int_be(self.color) / 256 -- 256 is for alpha byte
        self:raiseEvent(DemoConstants.EvColor, { [1] = color }, { cache = LoadBalancingConstants.EventCaching.AddToRoomCache })
    end

    function actor:group() return self._group  end

    function actor:getGroupByPos()
        local xp = math.floor(self.x * DemoConstants.GroupsPerAxis / self:getRoom():gridSize())
        local yp = math.floor(self.y * DemoConstants.GroupsPerAxis / self:getRoom():gridSize())
        return (1 + xp + yp * DemoConstants.GroupsPerAxis)
    end

    return actor
end

local function createClient(view)
    local client = LoadBalancingClient.new(appInfo.ServerAddress, appInfo.AppId, appInfo.AppVersion, { initRoom = initRoom, initActor = initActor, crcEnabled = false } )

    -- uncomment to use Custom Authentication
    -- client:setCustomAuthentication("username=" .. "yes" .. "&token=" .. "yes")

    client.view = view

    client.useGroups = true
    client.automove = true
    -- connect to random room or create new one automatocally
    -- close button click sets this to false
    client.autoconnect = true

    client.lastTick = PhotonTime.timeFromStart()

    client.view:log("Init", appInfo.ServerAddress, appInfo.AppId, appInfo.AppVersion)
    client.logger:info("Init", appInfo.ServerAddress, appInfo.AppId, appInfo.AppVersion)
    client.logger:setPrefix("Demo")
    client:setLogLevel(DemoConstants.LogLevel)
    client:myActor():setName("lua" .. math.floor(math.random() * 100))

    function client:start()
        self.view:setupUI()
        self.view:updateCellSize()
        self.view:setupScene()
--        self:connect({keepMasterConnection = true, lobbyStats = false})
        self:connectToRegionMaster("US")
    end

    function client:service1()
        self:service()
        if self.lastTick + DemoConstants.TickInterval < PhotonTime.timeFromStart() then
            self:tick()
            self.lastTick = PhotonTime.timeFromStart()
        end
    end

    function client:nextGridSize()
        local s = self:myRoom():gridSize();
        s = s * 2;
        if s > DemoConstants.GridSizeMax then
            s = DemoConstants.GridSizeMin
        end
        self.logger:info("nextGridSize:", self:myRoom():gridSize() .. " -> " .. s);
        self:myRoom():setCustomProperty(DemoConstants.GridSizeProp, s);
    end

    function client:setUseGroups(v)
        self.useGroups = v
    end

    function client:getGroupsPerAxis()
        return DemoConstants.GroupsPerAxis
    end

    function client:tick()
        for k, v in pairs(self:myRoomActors()) do
            v:tick()
        end
    end

    function client:onError(errorCode, errorMsg)
    	if errorCode == LoadBalancingClient.PeerErrorCode.MasterAuthenticationFailed then
    		errorMsg = errorMsg .. " with appId = " .. self.appId
    	end
        self.view:log("Error", errorCode, errorMsg)
        self.logger:error(errorCode, errorMsg)

    end

    function client:onOperationResponse(errorCode, errorMsg, code, content)
        if errorCode ~= 0 then
            if code == LoadBalancingConstants.OperationCode.JoinRandomGame then
                if errorCode == LoadBalancingConstants.ErrorCode.NoRandomMatchFound then
                    self.view:log("Join Random:", errorMsg)
                    self:createParticleDemoRoom()
                else
                    self.view:log("Join Random:", errorMsg)
					self.logger:error(errorCode, errorMsg)
                end
            else
                self.view:log("Operation Response error:", errorCode, errorMsg, code, content)
				self.logger:error(errorCode, errorMsg)
            end
        end
    end

    function client:onEvent(code, content, actorNr)		
        if code == DemoConstants.EvColor then
            local color = content[1] or content["1"]            
            local arr = {}
            byteutil.int_to_byte_array_be(color*256, arr) -- 256 is for alpha byte
			local p = self:myRoomActors()[actorNr]
			if p then
	            p:setColor(arr)
			end
        elseif code == DemoConstants.EvPosition then
	        local pos = content[1] or content["1"]
            local p = self:myRoomActors()[actorNr]
			if p then
    	        p:move(pos[1], pos[2])	
			end
        end
        self.logger:debug("Demo: onEvent", code, "content:", content, "actor:", actorNr)
    end

    function client:onStateChange(state)
        local info = nil
        if state == LoadBalancingClient.State.Joined then
            info =  self:myRoom().name
        end

        self.view:onStateChange(state, info)

        if state == LoadBalancingClient.State.JoinedLobby then
            if self.autoconnect then
                self.view:log("joining random room...")
                self:joinRandomRoom()
            end
        elseif state == LoadBalancingClient.State.Error then
            self:reset(true)
        end

        self.view:updateRoomButtons()
    end

    function client:onRoomListUpdate(rooms, roomsUpdated, roomsAdded, roomsRemoved)
    --    self.view:log("onRoomListUpdate")
        self.logger:info("onRoomListUpdate")
        self.view:updateRoomListMenu(rooms)
        self.view:updateRoomButtons() -- join btn state can be changed
    end

    function client:onRoomList(rooms)
        self.view:updateRoomListMenu(rooms)
        self.view:updateRoomButtons()
    end

    function client:onMyRoomPropertiesChange()
        self.view:setupScene()
    end

    function client:onJoinRoom()
        self.view:log("Joined Room: ", self:myRoom().name)
        self.logger:info("onJoinRoom myRoom", self:myRoom())
        self.logger:info("onJoinRoom myActor", self:myActor())
        self.logger:info("onJoinRoom myRoomActors", self:myRoomActors())
        self.view:updatePlayerList(self:myRoomActors())
        self.view:setupScene()
        self:myActor():raiseColorEvent()

        self:updateGroups()
    end

    function client:onActorJoin(actor)
        self.view:log("actor", actor.actorNr, "joined")
        self.view:updatePlayerList(self:myRoomActors())
        self.view:addActor(actor)
    end

    function client:onActorLeave(actor)
        if not actor.isLocal then
            self.view:removeActor(actor)
        end
        self.view:log("actor ", actor.actorNr, " left")
        self.view:updatePlayerList(self:myRoomActors())
    end

    -- tools
    function client:createParticleDemoRoom()
        self.view:log("New Game")
--		self:myRoom():setEmptyRoomLiveTime(5000);
        self:createRoomFromMy("Lua Particle Room - " .. ( math.floor(math.random() * 1000) ) )
    end

    function client:updateGroups()
        if self:isConnectedToGame() then
            if self.useGroups then
                self:changeGroups({}, {self:myActor():group()})
                self.view:onChangeGroups(self:myActor():group())
            else
                self:changeGroups({}, nil)
                self.view:onChangeGroups(nil)
            end
        end
    end

	function client:onFindFriendsResult(errorCode, errorMsg, friends)
        client.logger:info("onFindFriendsResult",errorCode, errorMsg, friends)
		if friends then
			for k, v in pairs(friends) do
				client.logger:info(" ", k, v.online, v.roomId)
			end
		end
    end
    function client:onAppStats(errorCode, errorMsg, stats) 
        client.logger:info("onAppStats", errorCode, errorMsg, stats)
		if stats then
			for k, v in pairs(stats) do
				client.logger:info(" ", k, v)
			end		
		end		
    end

    function client:onLobbyStats(errorCode, errorMsg, lobbies) 
		client.logger:info("onLobbyStats", errorCode, errorMsg, lobbies)
		if lobbies then
			for k, v in pairs(lobbies) do
				client.logger:info(" ", v.lobbyName, v.lobbyType, v.peerCount, v.gameCount)
			end				
		end
    end

    return client
end

return createClient