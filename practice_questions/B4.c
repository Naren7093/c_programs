// clear i'th bit of a number
#include<stdio.h>

int main()
{
        int b,i;
        printf("Enter a number:");
        scanf("%d",&b);

        printf("Enter a position:");
        scanf("%d",&i);

        b=b&~(1<<i);
        printf("after clearing ith bit :%d\n",b);
        return 0;
}

