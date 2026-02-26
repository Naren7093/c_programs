#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for(char j = ch; j >= 'A'; j--){
            printf("%c ", j);
	}

        for(char j = 'B'; j <= ch; j++){
            printf("%c ", j);
	}

        printf("\n");
    }

    return 0;
}
