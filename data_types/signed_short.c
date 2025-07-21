#include <stdio.h>
#include <limits.h> // For SHRT_MIN and SHRT_MAX

int main() {
    signed short s = -32768;
    printf("Signed short value: %d\n", s);
    printf("Signed short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    return 0;
}

