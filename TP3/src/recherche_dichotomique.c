#include <stdio.h>

int main(void)
{
    int tableau[100];
    int nombre;
    int gauche = 0;
    int droite = 99;
    int trouve = 0;

    /* Creation d'un tableau trie */
    for (int i = 0; i < 100; i++)
    {
        tableau[i] = i * 2;
    }

    printf("Tableau trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre);

    /* Recherche dichotomique */
    while (gauche <= droite)
    {
        int milieu = gauche + (droite - gauche) / 2;

        if (tableau[milieu] == nombre)
        {
            trouve = 1;
            break;
        }
        else if (tableau[milieu] < nombre)
        {
            gauche = milieu + 1;
        }
        else
        {
            droite = milieu - 1;
        }
    }

    if (trouve)
    {
        printf("Resultat : entier present\n");
    }
    else
    {
        printf("Resultat : entier absent\n");
    }

    return 0;
}
