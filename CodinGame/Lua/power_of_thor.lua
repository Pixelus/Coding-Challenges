-- Auto-generated code below aims at helping you parse
-- the standard input according to the problem statement.
-- Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

-- lightX: the X position of the light of power
-- lightY: the Y position of the light of power
-- initialTX: Thor's starting X position
-- initialTY: Thor's starting Y position
next_token = string.gmatch(io.read(), "[^%s]+")
lightX = tonumber(next_token())
lightY = tonumber(next_token())
initialTX = tonumber(next_token())
initialTY = tonumber(next_token())

-- game loop
while true do
    remainingTurns = tonumber(io.read()) -- The remaining amount of turns Thor can move. Do not remove this line.
    
    -- Write an action using print()
    -- To debug: io.stderr:write("Debug message\n")
    if (initialTY == lightY) then
        if (initialTX < lightX) then
            print('E')
            initialTX = initialTX + 1
        else 
            print('W')
            initialTX = initialTX - 1
        end
    elseif (initialTY > lightY) then
        if (initialTX == lightX) then
            print('N')
            initialTY = initialTY - 1
        elseif (initialTX > lightX) then
            print('NW')
            initialTX = initialTX - 1
            initialTY = initialTY - 1
        else 
            print('NE')
            initialTX = initialTX + 1
            initialTY = initialTY - 1
        end
    elseif (initialTY < lightY) then
        if (initialTX == lightX) then
            print('S')
            initialTY = initialTY + 1
        elseif (initialTX > lightX) then
            print('SW')
            initialTX = initialTX - 1
            initialTY = initialTY + 1
        else 
            print('SE')
            initialTX = initialTX + 1
            initialTY = initialTY + 1
        end
    end
end
print(initialTX)
print(initialTY)

    -- A single line providing the move to be made: N NE E SE S SW W or NW
 print('('..directionX..', '..directionY..')')
