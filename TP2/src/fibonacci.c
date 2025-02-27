/* 
25/09/2024 TP2 Ex2.3 : Génération de la Suite de Fibonacci en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    int n = 7; // Nombre de termes de la suite de Fibonacci à afficher
    int i; // Variable de boucle
    int U0 = 0; // Premier terme de la suite (Fibonacci de 0)
    int U1 = 1; // Deuxième terme de la suite (Fibonacci de 1)
    int Un; // Variable pour stocker le terme suivant dans la suite

    // Affichage des deux premiers termes de la suite
    printf("%d, %d", U0, U1);

    // Boucle pour calculer et afficher les termes de Fibonacci jusqu'au terme n
    for (i = 2; i < n; i++) {
        Un = U0 + U1;  // Calcul du terme suivant en additionnant les deux termes précédents
        printf(", %d", Un); // Affichage du terme suivant

        U0 = U1;  // Mise à jour de U0 avec la valeur de U1 (pour l'itération suivante)
        U1 = Un;  // Mise à jour de U1 avec la valeur de Un (pour l'itération suivante)
    }

    // Saut de ligne après avoir affiché les termes de la suite
    printf("\n");

    return 0;  
}
// Resulat:
// 0, 1, 1, 2, 3, 5, 8
