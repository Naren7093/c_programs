#include<stdio.h>

int main()
{
	int arr[10],n,i,key,location;

	printf("Enter size of elements:");
        scanf("%d",&n);

        printf("Enter number%d of elememts:\n",n);
	

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element to insert:");
	scanf("%d",&key);
	
	printf("Enter location to insert:");
	scanf("%d",&location);

	for(i=n-1;i>=location;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[location]=key;
	n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
    {
        printf("%d\n ", arr[i]);
    }
	return 0;
    }

