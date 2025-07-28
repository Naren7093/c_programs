#include<stdio.h>

int main()
{
	int a,b,c;
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=6-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=2*a-1;c++)
		{
	printf("*");
}
printf("\n");
}
for (a=5;a>=1;a--)
{
	for(b=1;b<=6-a;b++)
	{
printf(" ");
}
for(c=1;c<=2*a-1;c++)
{
printf("*");
}
printf("\n");
}
return 0;
}
