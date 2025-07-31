#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	a&b;
	a|b;
	a^b;
	printf("AND:%d\n",a&b);
	printf("OR:%d\n",a|b);
	printf("XOR:%d",a^b);

	return 0;
}

