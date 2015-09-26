local M = {}
function M.newVertPanel(horPadding, vertPadding)
    horPadding = horPadding or 10
    vertPadding = vertPadding or 5
    local panel = display.newGroup()
    function panel:addNewLine()
        panel:add(display.newRect(0, 0, display.pixelWidth, 0), 0)
    end
    function panel:add(obj, vp)
        vp = vp or vertPadding
        obj.anchorX = 0
        obj.anchorY = 0
        local x = 0
        local y = 0
        if panel.numChildren > 0 then
            x = panel[panel.numChildren].x + panel[panel.numChildren].width + horPadding
            if x + obj.width < display.pixelWidth then
                y = panel[panel.numChildren].y
            else
                x = 0
                y = panel[panel.numChildren].y + panel[panel.numChildren].height + vp
            end
        end
        obj.x = x
        obj.y = y
        panel:insert(obj)
    end
    return panel
end

local checkMark = " X"
function M.newCheckBox(text, checked, fontSize, buttonWidth)
	buttonWidth	= buttonWidth or 0
    local test = display.newText(text .. checkMark, 0, 0, buttonWidth, 0, native.systemFont, fontSize)
    local width, height = test.width, test.height
    test:removeSelf()
    local cb = display.newText(text .. checkMark, 0, 0, width, height, native.systemFont, fontSize)
    cb.anchorX = 0
    cb.anchorY = 0
    cb.checked = checked
    function cb:onChange(v) end
    function cb:set(v)
        cb.checked = v
        cb:update()
    end
    function cb:update()
        if cb.checked then
            cb.text = text .. checkMark;
        else
            cb.text = text
        end
    end
    cb:addEventListener( "touch", function(event)
        if event.phase == "ended" then
            cb.checked = not cb.checked
            cb:update()
            cb.onChange(cb.checked)
        end
    end )
    cb:update()
    return cb
end

return M