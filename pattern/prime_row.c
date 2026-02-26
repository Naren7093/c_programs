#include<stdio.h>

int main()
{
    int i, j, k, limit, flag, count = 0, prime[100];

    printf("Enter how many rows: ");
    scanf("%d", &limit);

    i = 2;
    while(count < limit)
    {
        flag = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            prime[count] = i;

            for(k = 0; k <= count; k++)
                printf("%d ", prime[k]);

            printf("\n");
            count++;
        }
        i++;
    }

    return 0;
}
