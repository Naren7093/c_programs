#include<stdio.h>

int main()
{
	int arr[10];
	int i,n,d,temp[10];
       // n=sizeof arr()/sizeof (arr[0]);

	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter number of elements to rotate left:\n");
	scanf("%d",&d);

	printf("Enter %d  elements in array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	for(i=0;i<n-d;i++)
	{
		arr[i]=arr[i+d];
	}
	for(i=0;i<d;i++)
	{
		arr[n-d+i]=temp[i];
	}

	printf("Array after rotation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}

	
