#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Utilisation : %s <operateur> <nombre1> <nombre2>\n", argv[0]);
        return 1;
    }

    char operateur = argv[1][0];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    switch (operateur)
    {
        case '+':
            printf("%d\n", somme(a, b));
            break;

        case '-':
            printf("%d\n", difference(a, b));
            break;

        case '*':
            printf("%d\n", produit(a, b));
            break;

        case '/':
            if (b == 0)
            {
                printf("Erreur : division par zero.\n");
                return 1;
            }
            printf("%d\n", quotient(a, b));
            break;

        case '%':
            if (b == 0)
            {
                printf("Erreur : modulo par zero.\n");
                return 1;
            }
            printf("%d\n", modulo(a, b));
            break;

        case '&':
            printf("%d\n", et_binaire(a, b));
            break;

        case '|':
            printf("%d\n", ou_binaire(a, b));
            break;

        default:
            printf("Erreur : operateur inconnu.\n");
            return 1;
    }

    return 0;
}

