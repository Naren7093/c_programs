#include <stdio.h>

int main() {
    int rows, i, j;
    long int n1, n2, n3;

    printf("Enter the number of rows for the Fibonacci triangle: ");
    scanf("%d", &rows);

    printf("The Fibonacci Triangle:\n");

    for (i = 1; i <= rows; i++) {
        n1 = 0;
        n2 = 1;

        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%ld ", n1);
            } else if (j == 2) {
                printf("%ld ", n2);
            } else {
                n3 = n1 + n2;
                printf("%ld ", n3);
                n1 = n2;
                n2 = n3;
            }
        }
        printf("\n");
    }

    return 0;
}
