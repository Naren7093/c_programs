#include<stdio.h>

int maximum(int a,int b)
{
	if(a>b)
	        return a;
	else
		return b;
}
int minimum(int m,int n)
{
	if(m<n)
		return m;
	else
		return n;
}
int main()
{
	int x,y;
	printf("Enter a&b:\n");
	scanf("%d %d",&x,&y);

	printf("%d is Maximum:\n",maximum(x,y));
	printf("%d is minimum:\n",minimum(x,y));
}

