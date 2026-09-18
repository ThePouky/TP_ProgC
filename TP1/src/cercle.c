#include <stdio.h>

int main(void)
{
    double pi = 3.14159;
    double rayon = 6.0;

    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    printf("Aire du cercle = %f\n", aire);
    printf("Périmètre du cercle = %f\n", perimetre);

    return 0;
}
