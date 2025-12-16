#include <stdio.h>

struct E {
    char a;
    int b;
    double c;
    char d;
};

int main(void)
{
    printf("Size of struct E = %zu bytes\n", sizeof(struct E));
    return 0;
}

