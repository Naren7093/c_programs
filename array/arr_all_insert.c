#include<stdio.h>

int main()
{
	int arr1[50],arr2[50];
	int i,m=10,n=5,loc;

	printf("Enter %d elements in arr1:\n",m);
	for(i=0;i<m;i++)
	scanf("%d",&arr1[i]);
	

        printf("Enter %d elements in arr2:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr2[i]);
	


        printf("Enter location to insert arr2 into arr1(0to%d):",m);
	scanf("%d",&loc);

	for(i=m-1;i>=loc;i--)
	arr1[i+n]=arr1[i];

        for(i=0;i<n;i++)
	arr1[loc+i]=arr2[i];

        m=m+n;

	printf("arr1 after insertion:\n");
	for(i=0;i<m;i++)
	printf("%d",arr1[i]);

        printf("\n");
	return 0;
}	
