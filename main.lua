local LoadBalancingClient
local LoadBalancingConstants
local tableutil
local Logger
local photon

if pcall(require,"plugin.photon") then -- try to load Corona photon plugin
    print("Demo: main module:","Corona plugin used")
    photon = require "plugin.photon"    
    LoadBalancingClient = photon.loadbalancing.LoadBalancingClient
    LoadBalancingConstants = photon.loadbalancing.constants
    Logger = photon.common.Logger
    tableutil = photon.common.util.tableutil    
else  -- or load photon.lua module
    print("Demo: main module:","Lua lib used")
    photon = require("photon")
    LoadBalancingClient = require("photon.loadbalancing.LoadBalancingClient")
    LoadBalancingConstants = require("photon.loadbalancing.constants")
    Logger = require("photon.common.Logger")
    tableutil = require("photon.common.util.tableutil")    
end

local appInfo = require("cloud-app-info")

local EVENT_CODE = 101
local MAX_SENDCOUNT = 100

local client = LoadBalancingClient.new(appInfo.ServerAddress, appInfo.AppId, appInfo.AppVersion)
-- client:setLogLevel(Logger.Level.DEBUG)
local lastErrMess = ""

function client:onOperationResponse(errorCode, errorMsg, code, content)
    self.logger:debug("onOperationResponse", errorCode, errorMsg, code, tableutil.toStringReq(content))
    if errorCode ~= 0 then
        if code == LoadBalancingConstants.OperationCode.JoinRandomGame then  -- master random room fail - try create
            self.logger:info("createRoom")
            self:createRoom("Dungeon 1")
		else 
			self.logger:error(errorCode, errorMsg)
        end
    end
end

function client:onStateChange(state)
    self.logger:debug("Demo: onStateChange " .. state .. ": " .. tostring(LoadBalancingClient.StateToName(state)))
    if state == LoadBalancingClient.State.JoinedLobby then
        self.logger:info("joinRandomRoom - 1")
        self:joinRandomRoom()
    end
end

function client:onError(errorCode, errorMsg)
    if errorCode == LoadBalancingClient.PeerErrorCode.MasterAuthenticationFailed then
        errorMsg = errorMsg .. " with appId = " .. self.appId .. "\nCheck app settings in cloud-app-info.lua"
    end
    self.logger:error(errorCode, errorMsg)
    lastErrMess = errorMsg;
end

function client:onEvent(code, content, actorNr)
    self.logger:debug("on event", code, tableutil.toStringReq(content))
    if code == EVENT_CODE then
        client.mReceiveCount = client.mReceiveCount + 1
        client.mLastReceiveEvent = content[2]
        if client.mReceiveCount == MAX_SENDCOUNT then
            self.mState = "Data Received"    
            client:disconnect();
        end
    end
end

local textObject
if display then
    textObject = display.newText("", 10, 30, 240, 240, native.systemFont, 18)
    textObject:setFillColor(1,1,1)
    textObject.anchorX = 0
    textObject.anchorY = 0

    require("widget").newButton
        {
            left = (display.contentWidth-200)/2,
            top = display.contentHeight - 140,
            label = "Stop",
            width = 200, height = 40,
            cornerRadius = 4,
            onEvent = function(event) 
                if "ended" == event.phase then
                    client.mRunning = false
                end
            end
        }
    if system.getInfo("platformName") == "Android" then         
        require("widget").newButton
            {
                left = (display.contentWidth-200)/2,
                top = display.contentHeight - 70,
                label = "Quit",
                width = 200, height = 40,
                cornerRadius = 4,
                onEvent = function(event) 
                    if "ended" == event.phase then                    
                            native.requestExit()
                    end
                end
            }        
    end
end

client.mState = "Init"
client.mLastSentEvent = ""
client.mSendCount = 0
client.mReceiveCount = 0
client.mLastReceiveEvent= ""
client.mRunning = true


function client:update()
    self:sendData()
    self:service()
end

function client:sendData()
    if self:isJoinedToRoom() and self.mSendCount < MAX_SENDCOUNT then
        self.mState = "Data Sending"    
        local data = {}
        self.mLastSentEvent = "e" .. self.mSendCount
        data[2] = self.mLastSentEvent
        data[3] = string.rep("x", 160)
        self:raiseEvent(EVENT_CODE, data, { receivers = LoadBalancingConstants.ReceiverGroup.All } ) 
        self.mSendCount = self.mSendCount + 1
        if self.mSendCount >= MAX_SENDCOUNT then
            self.mState = "Data Sent"
        end
    end
end

function client:getStateString()
    return LoadBalancingClient.StateToName(self.state) .. "\n\nevents: " .. self.mState .."\nsent "..self.mLastSentEvent..", total: ".. self.mSendCount .. "\nreceived "..self.mLastReceiveEvent .. ", total: " .. self.mReceiveCount 
        .. "\n\n" .. lastErrMess
end
local prevStr = ""
function client:timer(event)
    local str = nil
    self.logger:trace("quant")
    if self.mRunning then
        self:update()
    else
        timer.cancel(event.source)
        self.mState = "Stopped"
    end

    str = client:getStateString()
    if(prevStr ~= str) then
        prevStr = str
        print("\n\n")        
        print(str)
        if display then
            textObject.text = str
        end
    end

end

client:connectToRegionMaster("US")

if display then
    client.logger:info("Start")
    timer.performWithDelay( 100, client, 0)
else
    while true do
        client:timer()
        socket.sleep(0.1)
    end
end
