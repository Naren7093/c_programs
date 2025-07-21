#include <stdio.h>
#include <limits.h> // For USHRT_MAX

int main() {
    unsigned short us = 65535;
    printf("Unsigned short value: %u\n", us);
    printf("Unsigned short range: 0 to %u\n", USHRT_MAX);
    return 0;
}

