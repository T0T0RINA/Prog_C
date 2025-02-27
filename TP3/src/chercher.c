/*
02/10/2024 TP3 Ex3.4 : Recherche d'un entier dans un tableau
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100]; // Déclaration d'un tableau de 100 entiers
    int i; // Variable de boucle
    int N = 100; // Taille du tableau

    // Remplissage du tableau avec des entiers aléatoires entre 1 et 1000
    for(i = 0; i < N; i++) {
        T[i] = (rand() % 1000) + 1;  
    }
    
    int nb = 0; // Variable pour stocker le nombre recherché
    printf("Quel nombre cherchez-vous ? ");
    scanf("%d", &nb); // Saisie du nombre recherché par l'utilisateur

    // Parcours du tableau pour chercher le nombre
    for (i=0; i<N; i++) {
        if (T[i] == nb) { // Si le nombre est trouvé
            printf("Résultat : entier présent"); // Affiche que le nombre est présent
            break; // Sortie de la boucle car le nombre a été trouvé
        }
        if ((T[i] != nb) && (i == 99)) { // Si la fin du tableau est atteinte et que le nombre n'est pas trouvé
            printf("Résultat : absent"); // Affiche que le nombre est absent
        }
    }

    return 0;  
}

/* Resultat:
Quel nombre cherchez-vous ? 5
Résultat : absent
*/
