#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(i==6||k==1||k==2*i-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

