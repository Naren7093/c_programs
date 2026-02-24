#include<stdio.h>
int main()
{
    int n,i,j,s;
    int num=1,flag,k;

    printf("Enter size: ");
    scanf("%d",&n);

    /* upper part */
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
            printf("  ");

        for(j=1;j<=i;j++)
        {
            while(1)
            {
                num++;
                flag=1;

                for(k=2;k<=num/2;k++)
                {
                    if(num%k==0)
                    {
                        flag=0;
                        break;
                    }
                }

                if(flag==1)
                {
                    printf("%4d",num);
                    break;
                }
            }
        }
        printf("\n");
    }

    /* lower part */
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
            printf("  ");

        for(j=1;j<=i;j++)
        {
            while(1)
            {
                num++;
                flag=1;

                for(k=2;k<=num/2;k++)
                {
                    if(num%k==0)
                    {
                        flag=0;
                        break;
                    }
                }

                if(flag==1)
                {
                    printf("%4d",num);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
