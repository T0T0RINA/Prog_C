/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <string.h>

#define MAX_LIGNE 1024

int compter_occurrences(const char *ligne, const char *phrase) {
    int compteur = 0;
    const char *position = ligne;

    while ((position = strstr(position, phrase)) != NULL) {
        compteur++;
        position += strlen(phrase); // Avancer dans la ligne après la phrase trouvée
    }
    return compteur;
}

int main() {
    char nom_fichier[100];
    char phrase[100];
    char ligne[MAX_LIGNE];
    int numero_ligne = 0;

    // Demander le nom du fichier
    printf("Entrez le nom du fichier : ");
    scanf("%99s", nom_fichier);

    // Demander la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // Consommer le retour à la ligne après le nom du fichier
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0'; // Supprimer le saut de ligne de la phrase

    // Ouvrir le fichier en mode lecture
    FILE *fichier = fopen(nom_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    // Parcourir chaque ligne du fichier
    printf("Résultats de la recherche :\n");
    while (fgets(ligne, MAX_LIGNE, fichier) != NULL) {
        numero_ligne++;
        int occurrences = compter_occurrences(ligne, phrase);
        if (occurrences > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, occurrences);
        }
    }

    // Fermer le fichier
    fclose(fichier);
    return 0;
}
