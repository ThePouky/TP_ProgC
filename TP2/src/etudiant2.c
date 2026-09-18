#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_programmation;
    float note_systeme;
};

int main(void)
{
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note_programmation = 16.5;
    etudiants[0].note_systeme = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note_programmation = 14.0;
    etudiants[1].note_systeme = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Lucas");
    strcpy(etudiants[2].adresse, "15 Rue de Paris, Lyon");
    etudiants[2].note_programmation = 12.5;
    etudiants[2].note_systeme = 13.5;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Emma");
    strcpy(etudiants[3].adresse, "8 Avenue Victor Hugo, Lyon");
    etudiants[3].note_programmation = 17.0;
    etudiants[3].note_systeme = 16.0;

    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Thomas");
    strcpy(etudiants[4].adresse, "12 Rue des Ecoles, Lyon");
    etudiants[4].note_programmation = 15.5;
    etudiants[4].note_systeme = 11.5;

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].note_programmation);
        printf("Note Systeme d'exploitation : %.1f\n", etudiants[i].note_systeme);
        printf("\n");
    }

    return 0;
}
