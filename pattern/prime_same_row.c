#include<stdio.h>

int main()
{
    int i = 2, j, k, flag, rows, count = 0;

    printf("Enter rows: ");
    scanf("%d", &rows);

    while(count < rows)
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
            for(k = 0; k <= count; k++)
                printf("%d ", i);

            printf("\n");
            count++;
        }

        i++;
    }

    return 0;
}
