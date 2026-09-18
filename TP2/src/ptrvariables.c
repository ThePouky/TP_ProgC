#include <stdio.h>

int main(void)
{
    char c = 'A';
    short s = 100;
    int i = 1000;
    long int l = 10000;
    long long int ll = 100000;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("c  : adresse = %p, valeur = 0x%02x\n", (void *)pc, (unsigned char)c);
    printf("s  : adresse = %p, valeur = 0x%hx\n", (void *)ps, (unsigned short)s);
    printf("i  : adresse = %p, valeur = 0x%x\n", (void *)pi, (unsigned int)i);
    printf("l  : adresse = %p, valeur = 0x%lx\n", (void *)pl, (unsigned long)l);
    printf("ll : adresse = %p, valeur = 0x%llx\n", (void *)pll, (unsigned long long)ll);
    printf("f  : adresse = %p, valeur = %a\n", (void *)pf, (double)f);
    printf("d  : adresse = %p, valeur = %a\n", (void *)pd, d);
    printf("ld : adresse = %p, valeur = %La\n", (void *)pld, ld);

    *pc = 'B';
    *ps = 200;
    *pi = 2000;
    *pl = 20000;
    *pll = 200000;
    *pf = 4.0f;
    *pd = 6.0;
    *pld = 8.0L;

    printf("\nApres la manipulation :\n");
    printf("c  : adresse = %p, valeur = 0x%02x\n", (void *)pc, (unsigned char)c);
    printf("s  : adresse = %p, valeur = 0x%hx\n", (void *)ps, (unsigned short)s);
    printf("i  : adresse = %p, valeur = 0x%x\n", (void *)pi, (unsigned int)i);
    printf("l  : adresse = %p, valeur = 0x%lx\n", (void *)pl, (unsigned long)l);
    printf("ll : adresse = %p, valeur = 0x%llx\n", (void *)pll, (unsigned long long)ll);
    printf("f  : adresse = %p, valeur = %a\n", (void *)pf, (double)f);
    printf("d  : adresse = %p, valeur = %a\n", (void *)pd, d);
    printf("ld : adresse = %p, valeur = %La\n", (void *)pld, ld);

    return 0;
}
