#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;
       printf("swap:a=%d\n b=%d\n",a,b);
       return 0;
}

