/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

// fichier.c
#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

char lire_fichier(const char *nom_de_fichier) {
    FILE *fichier = fopen(nom_de_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur : Impossible de lire le fichier %s\n", nom_de_fichier);
        return '1'; // Code d'erreur
    }

    char caractere;
    while ((caractere = fgetc(fichier)) != EOF) {
        putchar(caractere);
    }
    fclose(fichier);
    return '0'; // Code de succès
}

char ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *fichier = fopen(nom_de_fichier, "a"); // Utiliser "a" pour ajouter au fichier
    if (fichier == NULL) {
        printf("Erreur : Impossible d'écrire dans le fichier %s\n", nom_de_fichier);
        return '1'; // Code d'erreur
    }

    // Ajouter un saut de ligne avant le message pour éviter que le texte soit collé
    fprintf(fichier, "\n%s", message);
    fclose(fichier);
    printf("Le message a été enregistré dans le fichier %s\n", nom_de_fichier);
    return '0'; // Code de succès
}

