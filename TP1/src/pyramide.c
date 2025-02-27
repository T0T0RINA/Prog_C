/*
18/09/2024 TP1 Ex1.10 : Génération d'une pyramide de nombres
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {

    int n = 6;
    int i, j;

    // Boucle pour chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {
        // Boucle pour afficher les espaces avant les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Boucle pour afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Boucle pour afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

/*Résultat (avec n = 6) :
     1
    121
   12321
  1234321
 123454321
12345654321
*/