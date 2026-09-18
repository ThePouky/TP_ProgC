#include <stdio.h>

int main(void)
{
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201L;
    float f = 5.0f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;

    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    for (size_t j = 0; j < sizeof(s); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n\nOctets de int :\n");
    p = (unsigned char *)&i;
    for (size_t j = 0; j < sizeof(i); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n\nOctets de long int :\n");
    p = (unsigned char *)&l;
    for (size_t j = 0; j < sizeof(l); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n\nOctets de float :\n");
    p = (unsigned char *)&f;
    for (size_t j = 0; j < sizeof(f); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n\nOctets de double :\n");
    p = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(d); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n\nOctets de long double :\n");
    p = (unsigned char *)&ld;
    for (size_t j = 0; j < sizeof(ld); j++)
    {
        printf("%02x ", *(p + j));
    }

    printf("\n");

    return 0;
}
