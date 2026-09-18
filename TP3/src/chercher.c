#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tableau[100];
    int nombre;
    int trouve = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 101;
    }

    printf("Tableau :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre);

    for (int i = 0; i < 100; i++)
    {
        if (tableau[i] == nombre)
        {
            trouve = 1;
            break;
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
