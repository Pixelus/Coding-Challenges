#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    double tipPercent;
    double taxPercent;
    scanf("%lf\n %lf\n %lf\n", &mealCost, &tipPercent, &taxPercent);

    double tip = mealCost * (tipPercent/100);
    double tax = mealCost * (taxPercent/100);
    int totalCost = round(mealCost + tip + tax);

    printf("The total meal cost is %d dollars.", totalCost);

    return 0;
}
