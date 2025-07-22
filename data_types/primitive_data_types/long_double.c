#include <stdio.h>
#include <float.h>  // For LDBL_MIN and LDBL_MAX

int main() {
    long double ld = 3.141592653589793238L;
    printf("Long double value: %Lf\n", ld);
    printf("Long double range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    printf("Long double precision: %d digits\n", LDBL_DIG);
    return 0;
}


