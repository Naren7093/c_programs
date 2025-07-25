#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Before swap:a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After sawp:a=%d b=%d",a,b);
return 0;
}
