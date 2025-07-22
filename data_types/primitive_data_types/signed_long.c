#include <stdio.h>
#include <limits.h> // For LONG_MIN and LONG_MAX

int main() {
    signed long l = -2147483648L;
    printf("Signed long value: %ld\n", l);
    printf("Signed long range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    return 0;
}

