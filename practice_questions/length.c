#include <stdio.h>

int main()
{
    float cm, meters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f",&cm);
    meters = cm / 100;
    kilometers = cm / 100000;
    printf("Length in meters = %.2f m\n", meters);
    printf("Length in kilometers = %.5f km\n", kilometers);

    return 0;
}

