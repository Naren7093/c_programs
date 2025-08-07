#include<stdio.h>

int main()
{
	int num,pos=1,result;
	printf("Enter number:");
	scanf("%d",&num);
	
	if(num==0)
		printf("No set bit\n");
	else
		result=num&-num;
	while(result>1)
	
	{
		
	result=	result>>1;
        pos++;
	}
	printf("Rightmost set bit position is:%d\n",pos);
	return 0;
}
	
