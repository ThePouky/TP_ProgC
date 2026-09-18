#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int i = 0; i < taille; i++)
    {
        int nombre = nombres[i];
        int binaire[32];
        int j = 0;

        printf("%d en binaire : ", nombre);

        if (nombre == 0)
        {
            printf("0");
        }
        else
        {
            while (nombre > 0)
            {
                binaire[j] = nombre % 2;
                nombre = nombre / 2;
                j++;
            }

            for (j = j - 1; j >= 0; j--)
            {
                printf("%d", binaire[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
