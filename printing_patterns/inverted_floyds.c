#include <stdio.h>

int main() {
    int i, j;
    int n = 6;
    int num = n * (n + 1) / 2; 

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}

