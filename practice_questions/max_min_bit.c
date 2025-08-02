#include<stdio.h>

int main()
{
	int m,n,max,min,diff;
	printf("Enter two numbers:");
	scanf("%d %d", &m, &n);

	diff = m-n;
	max = m-((diff>>31)&1)*diff;
	min = n+((diff>>31)&1)*diff;

	printf("Maximum:%d\n",max);
	printf("Minimum:%d\n",min);

	return 0;
}

	
