#include<stdio.h>

int main() {
    char ch1[50], ch2[50];

    printf("Enter a lower string: ");
    scanf("%s", ch1);

    printf("UPPER: ");
    for(int i = 0; ch1[i] != '\0'; i++) {
        if(ch1[i] >= 'a' && ch1[i] <= 'z') {
            printf("%c", ch1[i] - 32);
        } else {
            printf("%c", ch1[i]);
        }
    }

    printf("\n\nEnter an upper string: ");
    scanf("%s", ch2);

    printf("LOWER: ");
    for(int i = 0; ch2[i] != '\0'; i++) {
        if(ch2[i] >= 'A' && ch2[i] <= 'Z') {
            printf("%c", ch2[i] + 32);
        } else {
            printf("%c", ch2[i]);
        }
    }
    printf("\n");
    return 0;
}

