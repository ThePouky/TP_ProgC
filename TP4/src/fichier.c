#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier)
{
    FILE *fichier = fopen(nom_de_fichier, "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }

    char caractere;

    while ((caractere = fgetc(fichier)) != EOF)
    {
        putchar(caractere);
    }

    fclose(fichier);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message)
{
    FILE *fichier = fopen(nom_de_fichier, "w");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }

    fprintf(fichier, "%s", message);

    fclose(fichier);
}
