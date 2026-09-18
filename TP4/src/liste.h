#ifndef LISTE_H
#define LISTE_H

struct couleur
{
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
    struct couleur *suivant;
};

struct couleur *init_liste(void);

struct couleur *insertion(
    struct couleur *liste,
    unsigned char rouge,
    unsigned char vert,
    unsigned char bleu,
    unsigned char alpha
);

void parcours(struct couleur *liste);
void liberer_liste(struct couleur *liste);

#endif
