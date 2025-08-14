#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    
    for (i =0; i < n-1; i++)
    {
        for (j =i+1; j < n; j++)
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

