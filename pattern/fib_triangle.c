#include <stdio.h>

int main() {
    int rows, i, j;
    long int n1 = 0, n2 = 1, n3;
    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%ld ", n1);
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("\n");
    }
    return 0;
}
