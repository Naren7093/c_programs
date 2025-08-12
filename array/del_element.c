#include<stdio.h>

int main()
{
    int arr[10], n, i, loc;

    printf("Enter size of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter location to delete num(1 to %d): ",n);
    scanf("%d", &loc);

    for(i = loc-1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; 

    printf("After deletion array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

