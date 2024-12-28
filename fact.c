#include <stdio.h>

void factorial() {
    int i, fact = 1, number;
    printf("\nEnter a number to calculate its factorial: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    for (i = 1; i <= number; i++) {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", number, fact);
}

