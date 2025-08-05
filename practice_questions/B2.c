#include<stdio.h>

int main()
{
	int a ,i;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter the position(0 based):");
		scanf("%d",&i);

	if (a&(1<<i))
	printf("Set bit %d\n",i);
	else
		printf("Not a set bit %d\n",i);
	return 0;
}
