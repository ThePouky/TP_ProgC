#include <stdio.h>

int main(void)
{
    int a = 16;
    int b = 3;

    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    printf("a est egal a b : %d\n", a == b);
    printf("a est superieur a b : %d\n", a > b);

    return 0;
}

