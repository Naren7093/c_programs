#include <stdio.h>
#include <limits.h> // For ULONG_MAX

int main() {
    unsigned long ul = 4294967295UL;
    printf("Unsigned long value: %lu\n", ul);
    printf("Unsigned long range: 0 to %lu\n", ULONG_MAX);
    return 0;
}

