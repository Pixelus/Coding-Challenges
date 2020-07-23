#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    // game loop
    while (1) {
        int hmax = 0;
        int imax = 0;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            scanf("%d", &mountainH);
            if (mountainH > hmax)
            {
                hmax = mountainH;
                imax = i;
            }
        }
        printf("%d\n", imax);
    }
    return 0;
}
