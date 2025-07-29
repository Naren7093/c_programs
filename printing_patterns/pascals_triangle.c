#include <stdio.h>

int main() {
    int i, j, k, val;

    for(i = 0; i <= 5; i++) {
        for(k = 1; k <= 5 - i; k++) {
            printf("  ");
        }

        val = 1;
        for(j = 0; j <= i; j++) {
            printf("%4d", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

