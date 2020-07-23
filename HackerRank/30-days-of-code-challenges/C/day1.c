#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
        int j;
        double e;
        char ss[150];
        char newString[200];

    // Read and save an integer, double, and String to your variables.
        scanf("%d\n %lf\n %[^EOF]s\n", &j, &e, &ss);

    // Print the sum of both integer variables on a new line.
        printf("%d\n", i + j);

    // Print the sum of the double variables on a new line.
        printf("%0.1lf\n", d + e);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
        strcpy(newString, s);
        strcat(newString, ss);
        puts(newString);

    return 0;
}
