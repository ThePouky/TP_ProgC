#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void exercice_4_1(void)
{
    int a;
    int b;
    char operateur;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez un operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &operateur);

    if (operateur != '~')
    {
        printf("Entrez le deuxieme entier : ");
        scanf("%d", &b);
    }

    switch (operateur)
    {
        case '+':
            printf("Resultat : %d\n", somme(a, b));
            break;

        case '-':
            printf("Resultat : %d\n", difference(a, b));
            break;

        case '*':
            printf("Resultat : %d\n", produit(a, b));
            break;

        case '/':
            if (b != 0)
                printf("Resultat : %d\n", quotient(a, b));
            else
                printf("Erreur : division par zero.\n");
            break;

        case '%':
            if (b != 0)
                printf("Resultat : %d\n", modulo(a, b));
            else
                printf("Erreur : modulo par zero.\n");
            break;

        case '&':
            printf("Resultat : %d\n", et_binaire(a, b));
            break;

        case '|':
            printf("Resultat : %d\n", ou_binaire(a, b));
            break;

        case '~':
            printf("Resultat : %d\n", non_binaire(a));
            break;

        default:
            printf("Erreur : operateur inconnu.\n");
    }
}

void exercice_4_2(void)
{
    int choix;
    char nom_fichier[100];
    char message[500];

    printf("1 - Lire un fichier\n");
    printf("2 - Ecrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Nom du fichier : ");
    scanf("%99s", nom_fichier);

    switch (choix)
    {
        case 1:
            lire_fichier(nom_fichier);
            break;

        case 2:
            printf("Message a ecrire : ");
            scanf(" %499[^\n]", message);
            ecrire_dans_fichier(nom_fichier, message);
            printf("Ecriture terminee.\n");
            break;

        default:
            printf("Choix inconnu.\n");
    }
}

void exercice_4_7(void)
{
    struct couleur *liste = init_liste();

    liste = insertion(liste, 255, 0, 0, 255);
    liste = insertion(liste, 0, 255, 0, 255);
    liste = insertion(liste, 0, 0, 255, 255);
    liste = insertion(liste, 255, 255, 0, 255);
    liste = insertion(liste, 255, 0, 255, 255);
    liste = insertion(liste, 0, 255, 255, 255);
    liste = insertion(liste, 255, 255, 255, 255);
    liste = insertion(liste, 0, 0, 0, 255);
    liste = insertion(liste, 128, 128, 128, 255);
    liste = insertion(liste, 255, 128, 0, 255);

    printf("Liste des couleurs :\n");
    parcours(liste);

    liberer_liste(liste);
}

int main(void)
{
    int exercice;

    printf("Choisissez un exercice :\n");
    printf("1 - Exercice 4.1 : calculatrice\n");
    printf("2 - Exercice 4.2 : fichiers\n");
    printf("7 - Exercice 4.7 : liste de couleurs\n");
    printf("Votre choix : ");
    scanf("%d", &exercice);

    switch (exercice)
    {
        case 1:
            exercice_4_1();
            break;

        case 2:
            exercice_4_2();
            break;

        case 7:
            exercice_4_7();
            break;

        default:
            printf("Exercice inconnu.\n");
    }

    return 0;
}
