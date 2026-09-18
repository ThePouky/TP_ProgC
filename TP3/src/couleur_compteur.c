#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurComptee
{
    struct Couleur couleur;
    int occurrences;
};

int main(void)
{
    struct Couleur couleurs[100];
    struct Couleur palette[5] = {
        {0xff, 0x23, 0x23, 0x45},
        {0xff, 0x00, 0x23, 0x12},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0xff, 0xff}
    };

    struct CouleurComptee distinctes[100];
    int nombre_distinctes = 0;

    srand(time(NULL));

    /* Creation du tableau de 100 couleurs */
    for (int i = 0; i < 100; i++)
    {
        couleurs[i] = palette[rand() % 5];
    }

    /* Recherche et comptage des couleurs distinctes */
    for (int i = 0; i < 100; i++)
    {
        int trouve = 0;

        for (int j = 0; j < nombre_distinctes; j++)
        {
            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a)
            {
                distinctes[j].occurrences++;
                trouve = 1;
                break;
            }
        }

        if (!trouve)
        {
            distinctes[nombre_distinctes].couleur = couleurs[i];
            distinctes[nombre_distinctes].occurrences = 1;
            nombre_distinctes++;
        }
    }

    /* Affichage des couleurs distinctes */
    for (int i = 0; i < nombre_distinctes; i++)
    {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].occurrences);
    }

    return 0;
}
