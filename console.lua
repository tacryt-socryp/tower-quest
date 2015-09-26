
require("photon")

local Logger = require("photon.common.Logger")
local LBC = require("photon.loadbalancing.LoadBalancingClient")
local tableutil = require("photon.common.util.tableutil")

local view = {}
view.logger = Logger.new("View")

function view:setupUI()
    self.logger:info("setupUI")
end
function view:updateCellSize()
    self.logger:info("updateCellSize")
end
function view:setupScene()
    self.logger:info("setupScene")
end

function view:update()
    self.logger:info("update")
end

function view:onStateChange(state)
    self.logger:info("onStateChange", LBC.StateToName(state))
end

function view:updateRoomButtons()
    self.logger:info("updateRoomButtons")
end

function view:setPlayerVisual(p)
    self.logger:info("setPlayerVisual",p.actorNr)
end

function view:clearPlayerVisual(p)
    self.logger:info("setPlayerVisual", p.actorNr)
end

function view:log(...)
    self.logger:info("log", ... )
end

function view:onPlayerMove(p)
    self.logger:info("onPlayerMove", p.actorNr, p.x, p.y)
end

function view:onPlayerAge(p, age)
    self.logger:info("onPlayerAge", p.actorNr, age)
end

function view:updatePlayerShape(p)
    self.logger:info("updatePlayerShape", p.actorNr, p.color)
end

function view:updateRoomListMenu(rooms)
    self.logger:info("updateRoomListMenu", rooms)
end

function view:updatePlayerList(players)
    self.logger:info("updatePlayerList", tableutil.toString(players))
end

function view:onChangeGroups(g)
    self.logger:info("onChangeGroups: ", g or "OFF")
end

function view:setPlayerColor(p)
    self.logger:info("updatePlayerShape", p.actorNr, p.color[1], p.color[2], p.color[3])
end

function view:addActor(a)
    self.logger:info("addActor: ", a.actorNr)
end

function view:removeActor(a)
    self.logger:info("removeActor: ", a.actorNr)
end

local client = require("ParticleClient")(view)
client:start()

local socket = require("socket")
while true do
    client:service1()
    socket.sleep(0.1)
end