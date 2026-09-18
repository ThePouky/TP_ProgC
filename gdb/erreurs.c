#include <stdio.h>

int main(void)
{
    int tableau[100] = {0};

    for (size_t compteur = 0;
         compteur < sizeof(tableau) / sizeof(tableau[0]);
         compteur++)
    {
        tableau[compteur] = tableau[compteur] * 2;
    }

    return 0;
}
