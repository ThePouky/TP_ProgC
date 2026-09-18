#include <stdio.h>

unsigned long long factorielle(unsigned int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorielle(n - 1);
}

int main(void)
{
    unsigned int n;

    printf("Entrez un entier naturel : ");
    scanf("%u", &n);

    printf("%u! = %llu\n", n, factorielle(n));

    return 0;
}
