#include <stdio.h>

int main() {
    int a, b, result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int positive = 1;
    if (a < 0) {
        a = -a;
        positive = -positive;
    }
    if (b < 0) {
        b = -b;
        positive = -positive;
    }

    for (int i = 0; i < b; i++) {
        result = result + a;
    }

    result = result * positive;
    printf("Product = %d\n",result);
    return 0;
}


