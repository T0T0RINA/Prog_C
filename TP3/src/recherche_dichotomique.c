/*
02/10/2024 TP3 Ex3.5 : Recherche dichotomique dans un tableau trié
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100];
    int i;
    int j;
    int c;
    int N = 100;

    // Remplissage du tableau avec des nombres aléatoires
    for (i = 0; i < N; i++) {
        T[i] = (rand() % 1000) + 1;
    }

    // Tri du tableau (tri par sélection)
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (T[i] > T[j]) {
                c = T[i];
                T[i] = T[j];
                T[j] = c;
            }
        }
    }

    int nb = 0;
    printf("Quel nombre cherchez-vous ? ");
    scanf("%d", &nb);

    // Recherche dichotomique
    int debut = 0;
    int fin = N - 1;
    int milieu;
    int trouve = 0;  // Variable pour indiquer si l'élément a été trouvé

    //algorithme dichomotomique pour verifier la présence ou non
    while (debut <= fin) {
        milieu = debut + (fin - debut) / 2;

        if (T[milieu] == nb) {
            printf("Résultat : entier présent\n");// validé
            trouve = 1;
            break;
        } else if (T[milieu] < nb) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if (!trouve) {
        printf("Résultat : absent\n");//invalidé
    }

    return 0;
}

/* Resultat:
Quel nombre cherchez-vous ? 5
Résultat : absent
*/