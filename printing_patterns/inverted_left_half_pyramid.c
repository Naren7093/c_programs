#include<stdio.h>

int main()
{
	int k,l,m;
	for(k=6;k>=1;k--)
	{
		for(l=1;l<=6-k;l++)
		{
			printf(" ");
		}
		for(m=1;m<=k;m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
