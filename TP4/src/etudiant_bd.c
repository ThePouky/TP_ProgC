#include <stdio.h>
#include "fichier.h"

#define NB_ETUDIANTS 5

struct etudiant
{
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main(void)
{
    struct etudiant etudiants[NB_ETUDIANTS];
    FILE *fichier = fopen("etudiant.txt", "w");

    if (fichier == NULL)
    {
        printf("Erreur : impossible de creer etudiant.txt.\n");
        return 1;
    }

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("\nEtudiant %d\n", i + 1);

        printf("Nom : ");
        scanf("%49s", etudiants[i].nom);

        printf("Prenom : ");
        scanf("%49s", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %99[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        fprintf(fichier, "%s;%s;%s;%.2f;%.2f\n",
                etudiants[i].nom,
                etudiants[i].prenom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);
    }

    fclose(fichier);

    printf("\nLes etudiants ont ete enregistres dans etudiant.txt.\n");

    return 0;
}
