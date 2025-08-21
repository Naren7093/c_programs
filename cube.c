#include<stdio.h>

int cube(int num);
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	int result=cube(n);
	printf("result:%d\n",result);
	return 0;
}
int cube(int num)
{
	return num*num*num;
}
