#include <stdio.h>

int main(void)
{
    unsigned int d = 0x10001000;

    unsigned int bit4 = (d >> 28) & 1U;
    unsigned int bit20 = (d >> 12) & 1U;

    if (bit4 == 1 && bit20 == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
