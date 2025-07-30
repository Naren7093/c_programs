#include<stdio.h>

int main()
{
	int option;
	float celsius,fahrenheit;
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
      	printf("Enter option(1 or 2):");
	scanf("%d",&option);
	if(option==1)
	{
		
		printf("Enter temperature in  celsius:");
		scanf("%f",&celsius);
		fahrenheit =(celsius*9/5)+32;
		printf("value of F:2%f\n",fahrenheit);
	}
	else if (option==2)
	{
		  printf("Enter temperature in  fahrenheit:");
                scanf("%f",&fahrenheit);
                celsius =(fahrenheit-32)*5/9;
                printf("value of C: %f\n",celsius);
	}
	else
	{
		printf("Invalid option.Please enter 1 or 2.\n");
	}
		return 0;
}
