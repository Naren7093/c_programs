#include <stdio.h>
#include <limits.h> // For SCHAR_MIN and SCHAR_MAX

int main() {
    signed char c = -128;
    printf("Signed char value: %d\n", c);
    printf("Signed char range: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    return 0;
}

