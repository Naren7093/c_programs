#include <stdio.h>

int main()
{
    int num;

    printf("Even numbers between 1 to 100: \n");

    for(num = 1; num <= 100; num++)
    {
        if(num % 2 == 1)
            continue;

        printf("%d ", num);
    }

    return 0;
}

