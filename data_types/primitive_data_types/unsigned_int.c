#include <stdio.h>
#include <limits.h> // For UINT_MAX

int main() {
    unsigned int ui = 4294967295U;
    printf("Unsigned int value: %u\n", ui);
    printf("Unsigned int range: 0 to %u\n", UINT_MAX);
    return 0;
}

