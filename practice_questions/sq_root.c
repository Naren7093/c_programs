#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root of negative number is not real.\n");
    } else {
        result = sqrt(number);
        printf("Square root of %.2lf is %.4lf\n", number, result);
    }

    return 0;
}

