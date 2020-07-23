/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

var inputs = readline().split(' ');
var lightX = parseInt(inputs[0]);
var lightY = parseInt(inputs[1]);
var thorX = parseInt(inputs[2]);
var thorY = parseInt(inputs[3]);

// game loop
while (true) {
    var remainingTurns = parseInt(readline()); // The remaining amount of turns Thor can move. Do not remove this line.

    if (thorY == lightY) {
        if (thorX < lightX) {
            print('E');
            thorX++;
        } else {
            print('W')
            thorX--;
        }
    } else if (thorY > lightY) {
        if (thorX == lightX) {
            print('N');
            printErr(thorY);
            thorY--;
        } else if (thorX > lightX) {
            print('NW');
            thorX--;
            thorY--;
        } else {
            print('NE');
            thorX++;
            thorY--;
        }
    } else if (thorY < lightY) {
        if (thorX == lightX) {
            print('S');
            thorY++;
        } else if (thorX > lightX) {
            print('SW');
            thorX--;
            thorY++;
        } else {
            print('SE');
            thorX++;
            thorY++;
        }
    }
}
print(thorX);
print(thorY);
print("(" + directionX + "," + directionY + ")");
