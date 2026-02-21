#include<stdio.h>

int main()
{
    int a[10], i, rightmost_set, xor = 0, x = 0, y = 0, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        xor ^= a[i];
    }

    rightmost_set = xor & (-xor);

    for(i = 0; i < n; i++)
    {
        if(a[i] & rightmost_set)
        {
            x ^= a[i];
        }
        else
        {
            y ^= a[i];
        }
    }

    printf("%d %d", x, y);

    return 0;
}
