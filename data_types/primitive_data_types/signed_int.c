#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int i = -2147483648;
    printf("Signed int value: %d\n", i);
    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX);
    return 0;
}

