#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int entiers[10];
    float flottants[10];

    int *p_entiers = entiers;
    float *p_flottants = flottants;

    srand(time(NULL));

    /* Remplissage des tableaux avec des valeurs aleatoires */
    for (int i = 0; i < 10; i++)
    {
        *(p_entiers + i) = rand() % 100;
        *(p_flottants + i) = (float)(rand() % 1000) / 10.0f;
    }

    printf("Tableau d'entiers avant :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p_entiers + i));
    }

    printf("\n\nTableau de flottants avant :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", *(p_flottants + i));
    }

    /* Multiplication par 3 des indices divisibles par 2 */
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            *(p_entiers + i) *= 3;
            *(p_flottants + i) *= 3;
        }
    }

    printf("\n\nTableau d'entiers apres :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p_entiers + i));
    }

    printf("\n\nTableau de flottants apres :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", *(p_flottants + i));
    }

    printf("\n");

    return 0;
}
