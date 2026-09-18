#include <stdio.h>

int main(void)
{
    char caractere = 'A';
    signed char signe_char = -100;
    unsigned char non_signe_char = 200;

    short signe_short = -32000;
    unsigned short non_signe_short = 65000;

    int signe_int = -100000;
    unsigned int non_signe_int = 100000;

    long int signe_long = -1000000L;
    unsigned long int non_signe_long = 1000000UL;

    long long int signe_long_long = -10000000000LL;
    unsigned long long int non_signe_long_long = 10000000000ULL;

    float nombre_float = 3.14f;
    double nombre_double = 3.14159;
    long double nombre_long_double = 3.141592653589793L;

    printf("char : %c\n", caractere);
    printf("signed char : %hhd\n", signe_char);
    printf("unsigned char : %hhu\n", non_signe_char);

    printf("short : %hd\n", signe_short);
    printf("unsigned short : %hu\n", non_signe_short);

    printf("int : %d\n", signe_int);
    printf("unsigned int : %u\n", non_signe_int);

    printf("long int : %ld\n", signe_long);
    printf("unsigned long int : %lu\n", non_signe_long);

    printf("long long int : %lld\n", signe_long_long);
    printf("unsigned long long int : %llu\n", non_signe_long_long);

    printf("float : %f\n", nombre_float);
    printf("double : %f\n", nombre_double);
    printf("long double : %Lf\n", nombre_long_double);

    return 0;
}
