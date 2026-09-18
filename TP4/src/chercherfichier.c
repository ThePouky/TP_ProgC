#include <stdio.h>
#include <string.h>

#define TAILLE_LIGNE 1000
#define TAILLE_PHRASE 200

int main(int argc, char *argv[])
{
    FILE *fichier;
    char ligne[TAILLE_LIGNE];
    char phrase[TAILLE_PHRASE];
    int numero_ligne = 0;
    int total = 0;

    if (argc != 2)
    {
        printf("Utilisation : %s <fichier>\n", argv[0]);
        return 1;
    }

    fichier = fopen(argv[1], "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    printf("Phrase a chercher : ");
    scanf(" %199[^\n]", phrase);

    while (fgets(ligne, sizeof(ligne), fichier) != NULL)
    {
        int occurrences = 0;
        char *position = ligne;

        numero_ligne++;

        while ((position = strstr(position, phrase)) != NULL)
        {
            occurrences++;
            total++;
            position += strlen(phrase);
        }

        if (occurrences > 0)
        {
            printf("Ligne %d : %d occurrence(s)\n",
                   numero_ligne, occurrences);
        }
    }

    printf("Total : %d occurrence(s)\n", total);

    fclose(fichier);

    return 0;
}
