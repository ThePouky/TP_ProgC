#include <stdio.h>

int main(void)
{
    char noms_prenoms[5][50] = {
        "Dupont Marie",
        "Martin Pierre",
        "Bernard Lucas",
        "Petit Emma",
        "Robert Thomas"
    };

    char adresses[5][100] = {
        "20 Boulevard Niels Bohr, Lyon",
        "22 Boulevard Niels Bohr, Lyon",
        "15 Rue de Paris, Lyon",
        "8 Avenue Victor Hugo, Lyon",
        "12 Rue des Ecoles, Lyon"
    };

    float notes_programmation[5] = {16.5, 14.0, 12.5, 17.0, 15.5};
    float notes_systeme[5] = {12.1, 14.1, 13.5, 16.0, 11.5};

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom et prenom : %s\n", noms_prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_programmation[i]);
        printf("Note Systeme d'exploitation : %.1f\n", notes_systeme[i]);
        printf("\n");
    }

    return 0;
}
