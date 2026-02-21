#include<stdio.h>

int main()
{
    int a[50], i, j, n, count, visited[50] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Frequencies:\n");

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
        {
            continue;
        }

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d\n", a[i], count);
    }

    printf("Non-repeating elements:\n");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
