#include<stdio.h>

int main()
{
	int arr[10],freq[10]={0};
	int i,n;

	printf("Enter size of array:");
	scanf("%d",&n);

	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[arr[i]]++;
	}
	printf("\nFrequency of  each element:\n");
	for(i=0;i<10;i++)
	{
		if(freq[i]>0)
		{
			printf("%d occurs %d times\n",i,freq[i]);
		}
	}
	return 0;
}
