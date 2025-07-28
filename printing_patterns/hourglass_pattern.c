#include<stdio.h>

int main()
{
	int n,o,p;
	for(n=6;n>=1;n--)
	{
		for(o=1;o<=6-n;o++)
		{
			printf(" ");
		}
		for(p=1;p<=2*n-1;p++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(n=2;n<=6;n++)
        {       
                for(o=1;o<=6-n;o++)
                {       
                        printf(" ");
                }       
                for(p=1;p<=2*n-1;p++)
                {       
                        printf("*");
                }       
                printf("\n");
        }      
       return 0;
}

