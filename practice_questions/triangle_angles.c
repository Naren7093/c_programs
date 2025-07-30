#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float A, B, C;
    const float PI = 3.14159265;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    if (a + b > c && b + c > a && c + a > b) {
        A = acos((b*b + c*c - a*a) / (2 * b * c)) * (180 / PI);
        B = acos((a*a + c*c - b*b) / (2 * a * c)) * (180 / PI);
        C = 180 - (A + B);  // Optional, or use formula for C too

        printf("Angle A = %.2f degrees\n", A);
        printf("Angle B = %.2f degrees\n", B);
        printf("Angle C = %.2f degrees\n", C);
    } else {
        printf("Invalid triangle sides.\n");
    }

    return 0;
}

