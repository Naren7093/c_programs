#include <stdio.h>
#include <limits.h> // For UCHAR_MAX

int main() {
    unsigned char uc = 255;
    printf("Unsigned char value: %u\n", uc);
    printf("Unsigned char range: 0 to %u\n", UCHAR_MAX);
    return 0;
}


