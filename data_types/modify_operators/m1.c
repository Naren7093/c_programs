#include<stdio.h>

int main()
{
	int a=10,b=20,c;
	c=a++ * --b;
	printf("%d\n%d\n%d",a,b,c);
	return 0;
}

