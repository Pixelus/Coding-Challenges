#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N;
    scanf("%d",&N);
    if (1 <= N <= 100)
    {
        if (N % 2 == 0)
        {
            if (2 <= N && N <= 5)
            {
                printf("Not Weird\n");
            } else if (6 <= N && N <= 20)
            {
                printf("Weird\n");
            } else if (N > 20)
            {
                printf("Not Weird\n");
            }
        } else
        {
            printf("Weird\n");
        }
    }
    return 0;
}
