#include <stdio.h>
#include <math.h>

int main() {
    float P, T, R;
    float SI, CI;

    printf("Enter Principal (P), Time (T in years), and Rate (R):\n");
    scanf("%f %f %f", &P, &T, &R);

    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;

    printf("Simple Interest  = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}

