#include <stdio.h>
#include <float.h>  // For DBL_MIN and DBL_MAX

int main() {
    double d = 3.14159265358979;
    printf("Double value: %lf\n", d);
    printf("Double range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Double precision: %d digits\n", DBL_DIG);
    return 0;
}


