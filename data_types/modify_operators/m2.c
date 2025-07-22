#include<stdio.h>

int main()
{
	int n=3;
	n=n++ + ++n;
	printf("%d\n",n);
	return 0;
}
