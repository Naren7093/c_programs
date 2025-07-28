#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter size:");
	scanf("%d",&n);
		for (i=1;i<=6;i++)
		{
			for(j=1;j<=6;j++)
			{
				if(i>1&&i<n&&j>1&&j<n)
				printf(" ");
					else
						printf("*");
			}
			printf("\n");
		}
	return 0;
}


