#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int thorX; // Thor's starting X position
    int thorY; // Thor's starting Y position

    scanf("%d%d%d%d", &lightX, &lightY, &thorX, &thorY);

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);

        if (thorY < lightY) {
            printf("S");
            thorY++;
        }
        else if (thorY > lightY) {
            printf("N");
            thorY--;
        }

        if (thorX < lightX) {
            printf("E");
            thorX++;
        }
        else if (thorX > lightX) {
            printf("W");
            thorX--;
        }

        printf("\n");
    }

    return 0;
}
