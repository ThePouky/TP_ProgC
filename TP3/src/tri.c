#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tableau[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 201 - 100;
    }

    printf("Tableau non trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 99 - i; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                int temporaire = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temporaire;
            }
        }
    }

    printf("Tableau trie par ordre croissant :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}
