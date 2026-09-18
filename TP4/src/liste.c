#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

struct couleur *init_liste(void)
{
    return NULL;
}

struct couleur *insertion(
    struct couleur *liste,
    unsigned char rouge,
    unsigned char vert,
    unsigned char bleu,
    unsigned char alpha)
{
    struct couleur *nouvelle = malloc(sizeof(struct couleur));

    if (nouvelle == NULL)
    {
        printf("Erreur d'allocation memoire.\n");
        return liste;
    }

    nouvelle->rouge = rouge;
    nouvelle->vert = vert;
    nouvelle->bleu = bleu;
    nouvelle->alpha = alpha;
    nouvelle->suivant = liste;

    return nouvelle;
}

void parcours(struct couleur *liste)
{
    int numero = 1;

    while (liste != NULL)
    {
        printf(
            "Couleur %d : R=%u G=%u B=%u A=%u\n",
            numero,
            liste->rouge,
            liste->vert,
            liste->bleu,
            liste->alpha
        );

        liste = liste->suivant;
        numero++;
    }
}

void liberer_liste(struct couleur *liste)
{
    while (liste != NULL)
    {
        struct couleur *suivante = liste->suivant;
        free(liste);
        liste = suivante;
    }
}
