#include<stdio.h>
int main()
{
	int a=1,b=2;
	b=a++ + b--;
	a=a-- + ++b;
	b=++a + --b;
	printf("%d\n%d",a,b);
	return 0;
}
