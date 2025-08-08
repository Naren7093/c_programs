#include<stdio.h>

int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int i,largest;

	largest=arr[0];

	for(i=1;i<9;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
		printf("Largest element:%d\n",largest);
		return 0;
	
}
