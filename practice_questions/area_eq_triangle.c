#include <stdio.h>
#include <math.h>

int main() {
    float side, height, area;

    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);

    height = (sqrt(3) / 2) * side;
    area = 0.5 * side * height;

    printf("Height = %.2f\n", height);
    printf("Area = %.2f\n", area);

    return 0;
}

