#include <stdio.h>
#include <float.h>  // For FLT_MIN and FLT_MAX

int main() {
    float f = 3.14159f;
    printf("Float value: %f\n", f);
    printf("Float range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Float precision: %d digits\n", FLT_DIG);
    return 0;
}

