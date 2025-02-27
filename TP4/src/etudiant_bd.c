/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <string.h> 
#include "fichier.h"

struct Etudiant {
    char nom[50];
    char adresse[100];
    float note_prog;
    float note_exp;
};

int main() {
    struct Etudiant etudiants[5];

    // Collecte des informations des étudiant.e.s
    for (int i = 0; i < 5; i++) {
        printf("Étudiant(e) %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %49[^\n]", etudiants[i].nom);

        printf("Adresse : ");
        scanf(" %99[^\n]", etudiants[i].adresse);

        printf("Note1 : ");
        scanf("%f", &etudiants[i].note_prog);

        printf("Note2 : ");
        scanf("%f", &etudiants[i].note_exp);

        printf("\n"); 
    }

    // Création du contenu à écrire dans le fichier
    char contenu[5000] = ""; // Taille augmentée pour stocker toutes les informations
    char buffer[500]; // Taille augmentée pour chaque étudiant

    for (int i = 0; i < 5; i++) {
        snprintf(buffer, sizeof(buffer),
                 "Étudiant.e %d :\nNom : %s\nAdresse : %s\nNote 1 : %.1f\nNote 2: %.1f\n\n",
                 i + 1, etudiants[i].nom, etudiants[i].adresse, etudiants[i].note_prog, etudiants[i].note_exp);
        strncat(contenu, buffer, sizeof(contenu) - strlen(contenu) - 1); // Utiliser strncat pour éviter le dépassement de `contenu`
    }

    // Appel à la fonction pour écrire dans le fichier
    ecrire_dans_fichier("TP4/src/note.txt", contenu);

    return 0;
}

