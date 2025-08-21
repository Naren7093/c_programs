#include<stdio.h>
int sum(int a,int b)
//int sum(int *a,int *b)
{
//	*a=10;
//	*b=20;
//	return *a+*b;
	return a+b;
}
int main()
{
	int a,b;
	printf("Enter a&b:\n");
	scanf("%d %d",&a,&b);
	printf("sum:%d\n",sum(a,b));
//	printf("a=%d b=%d\n",a,b);
}

