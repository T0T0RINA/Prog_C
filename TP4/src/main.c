/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

// main.c
#include <stdio.h>
#include <string.h>
#include "operator.h" 
#include "fichier.h" 
#include "liste.h"

int main() {  
    int num1, num2, res;
    char op;
    int exo, choix;
    char nom_de_fichier[100];
    char message[256];
    char resultat;

    printf("EXO? ");
    scanf("%d", &exo);
    getchar(); // Pour consommer le caractère de nouvelle ligne restant

    switch(exo) {
    case 1:
        printf("Nombre 1? ");
        scanf("%d", &num1);
        printf("Nombre 2? ");
        scanf("%d", &num2);
        getchar(); // Consomme le retour à la ligne restant

        printf("Opération (+, -, x, /, modulo, &, |, ~)? ");
        scanf(" %c", &op);  

        switch (op) {
        case '+':
            res = somme(num1, num2);
            break;
        case 'x':
            res = produit(num1, num2);
            break;
        case '-':
            res = difference(num1, num2);
            break;
        case '/':
            res = quotient(num1, num2);
            break;
        case '%':
            res = modulo(num1, num2);
            break;
        case '&':
            res = et(num1, num2);
            break;
        case '|':
            res = ou(num1, num2);
            break;
        case '~':
            res = negation(num1);
            break;
        }
        printf("Le résultat est %d\n", res);
        break;

    case 2:
        printf("Choisissez une opération :\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); // Pour consommer le retour à la ligne restant

        printf("Entrez le nom du fichier : ");
        fgets(nom_de_fichier, sizeof(nom_de_fichier), stdin);
        nom_de_fichier[strcspn(nom_de_fichier, "\n")] = '\0';

        if (choix == 1) {
            resultat = lire_fichier(nom_de_fichier);
        } else if (choix == 2) {
            printf("Entrez le message à écrire dans le fichier : ");
            fgets(message, sizeof(message), stdin);
            message[strcspn(message, "\n")] = '\0';

            resultat = ecrire_dans_fichier(nom_de_fichier, message);
        } else {
            printf("Choix invalide.\n");
        }

        if (resultat == '0') {
            printf("Opération réussie.\n");
        } else {
            printf("Erreur lors de l'opération.\n");
        }
        break;
    case 7:
        struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    // Ajouter 10 couleurs à la liste
    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF}, // Rouge
        {0x00, 0xFF, 0x00, 0xFF}, // Vert
        {0x00, 0x00, 0xFF, 0xFF}, // Bleu
        {0xFF, 0xFF, 0x00, 0xFF}, // Jaune
        {0xFF, 0x00, 0xFF, 0xFF}, // Magenta
        {0x00, 0xFF, 0xFF, 0xFF}, // Cyan
        {0x80, 0x80, 0x80, 0xFF}, // Gris
        {0xFF, 0xA5, 0x00, 0xFF}, // Orange
        {0xA5, 0x2A, 0x2A, 0xFF}, // Brun
        {0x00, 0x00, 0x00, 0xFF}  // Noir
    };

    for (int i = 0; i < 10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    // Afficher toutes les couleurs de la liste
    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
    break;
   



    return 0;
}
}
