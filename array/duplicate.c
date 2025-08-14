#include<stdio.h>

int main()
{
    int arr[10], n;
    int i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


	printf("Duplicate elements are:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
                    if (arr[i]==arr[j])
		    {
			    printf("%d",arr[i]);
		    break;
		    }
		}
	}
	printf("\n");
	return 0;
}
