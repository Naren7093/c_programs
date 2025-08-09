#include<stdio.h>

int main()
{
	int marks[5],i,sum=0;
	float avg;

	printf("Enter marks of five students:");
	for(i=0;i<5;i++)
	scanf("%d",&marks[i]);

	for(i=0;i<5;i++)
	{
        printf("\narray marks index %d is:%d",i,marks[i]);

	sum=sum+marks[i];
}
	avg=sum/5.0;
        printf("\nTotal marks:%d",sum);
	printf("\nAverage marks:%f\n",avg);

	return 0;
}

