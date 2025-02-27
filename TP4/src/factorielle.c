/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {
  if (num == 0) {
    printf("fact(0): 1\n");
    return 1;
  } else {
    int valeur = num * factorielle(num - 1);
    printf("fact(%d): %d\n", num, valeur);
    return (valeur);
  }
}

int main() {
    int n;

    // Demander à l'utilisateur d'entrer un entier naturel
    printf("Entrez un entier naturel : ");
    scanf("%d", &n);

    // Vérifier si le nombre est négatif
    if (n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les entiers négatifs.\n");
    } else {
        // Appeler la fonction factorielle et stocker le résultat sans afficher
        int resultat = factorielle(n);

        // Afficher uniquement le résultat final
        printf("La factorielle de %d est %d\n", n, resultat);
    }

    return 0;
}