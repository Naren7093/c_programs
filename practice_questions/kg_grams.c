#include <stdio.h>

int main() {
    float kg, grams;

    
    printf("Enter mass in kilograms: ");
    scanf("%f", &kg);

    
    grams = kg * 1000;

    
    printf("%.2f kilograms is equal to %.2f grams\n", kg, grams);

    return 0;
}

