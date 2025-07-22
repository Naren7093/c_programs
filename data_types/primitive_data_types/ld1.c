#include <stdio.h>
int main() {
    long double a = 12.345L, b = 3.0L;
    printf("Long double addition: %Lf + %Lf = %Lf\n", a, b, a + b);
    printf("Long double subtraction: %Lf - %Lf = %Lf\n", a, b, a - b);
    printf("Long double multiplication: %Lf * %Lf = %Lf\n", a, b, a * b);
    printf("Long double division: %Lf / %Lf = %Lf\n", a, b, a / b);
    return 0;
}


