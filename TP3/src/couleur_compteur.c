/*
02/10/2024 TP3 Ex3.7 : Compter les couleurs distinctes dans un tableau
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>

#define N 100 // Définition de la constante N pour la taille du tableau de couleurs

// Définition de la structure Couleur avec les composants rouge, vert, bleu et alpha
struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    struct Couleur couleurs[N]; // Tableau pour  100 couleurs
    int occurrences[N] = {0};  // Tableau pour le nombre d'occurrences de chaque couleur
    int deja_comptee[N] = {0};  // Tableau pour indiquer si une couleur a déjà été comptée

    // Génération aléatoire de 100 couleurs avec des valeurs pour r, g, b et a comprises entre 0 et 255
    for (int i = 0; i < N; i++) {
        couleurs[i].r = rand() % 256; 
        couleurs[i].g = rand() % 256; 
        couleurs[i].b = rand() % 256; 
        couleurs[i].a = rand() % 256;
    }

    // Boucle pour parcourir toutes les couleurs et compter les occurrences
    for (int i = 0; i < N; i++) {
        if (!deja_comptee[i]) {   // Vérifie si la couleur a déjà été comptée
            int count = 1;   // Initialise le compteur pour la couleur courante
            for (int j = i + 1; j < N; j++) { // Comparaison avec les couleurs suivantes
                // Si les composantes r, g, b et a sont identiques, la couleur est la même
                if (couleurs[i].r == couleurs[j].r &&
                    couleurs[i].g == couleurs[j].g &&
                    couleurs[i].b == couleurs[j].b &&
                    couleurs[i].a == couleurs[j].a) {
                    count++;   // Incrémente le compteur pour cette couleur
                    deja_comptee[j] = 1;  // Marque la couleur comme déjà comptée
                }
            }
            occurrences[i] = count;  // Stocke le nombre pour la couleur
        }
    }

    // Affichage des couleurs avec leurs occurrences  
    for (int i = 0; i < N; i++) {
        if (occurrences[i] > 0) {
            printf("Couleur #%02X%02X%02X%02X : %d occurrences\n", 
                couleurs[i].r, couleurs[i].g, couleurs[i].b, couleurs[i].a, occurrences[i]);
        }
    }

    return 0;
}

/* Resultat:

Couleur #67C66973 : 1 occurrences
Couleur #51FF4AEC : 1 occurrences
Couleur #29CDBAAB : 1 occurrences
Couleur #F2FBE346 : 1 occurrences
Couleur #7CC254F8 : 1 occurrences
Couleur #1BE8E78D : 1 occurrences
Couleur #765A2E63 : 1 occurrences
Couleur #339FC99A : 1 occurrences
Couleur #66320DB7 : 1 occurrences
Couleur #3158A35A : 1 occurrences
Couleur #255D0517 : 1 occurrences
Couleur #58E95ED4 : 1 occurrences
Couleur #ABB2CDC6 : 1 occurrences
Couleur #9BB45411 : 1 occurrences
Couleur #0E827441 : 1 occurrences
Couleur #213DDC87 : 1 occurrences
Couleur #70E93EA1 : 1 occurrences
Couleur #41E1FC67 : 1 occurrences
Couleur #3E017E97 : 1 occurrences
Couleur #EADC6B96 : 1 occurrences
Couleur #8F385C2A : 1 occurrences
Couleur #ECB03BFB : 1 occurrences
Couleur #32AF3C54 : 1 occurrences
Couleur #EC18DB5C : 1 occurrences
Couleur #021AFE43 : 1 occurrences
Couleur #FBFAAA3A : 1 occurrences
Couleur #FB29D1E6 : 1 occurrences
Couleur #053C7C94 : 1 occurrences
Couleur #75D8BE61 : 1 occurrences
Couleur #89F95CBB : 1 occurrences
Couleur #A8990F95 : 1 occurrences
Couleur #B1EBF1B3 : 1 occurrences
Couleur #05EFF700 : 1 occurrences
Couleur #E9A13AE5 : 1 occurrences
Couleur #CA0BCBD0 : 1 occurrences
Couleur #484764BD : 1 occurrences
Couleur #1F231EA8 : 1 occurrences
Couleur #1C7B64C5 : 1 occurrences
Couleur #14735AC5 : 1 occurrences
Couleur #5E4B7963 : 1 occurrences
Couleur #3B706424 : 1 occurrences
Couleur #119E09DC : 1 occurrences
Couleur #AAD4ACF2 : 1 occurrences
Couleur #1B10AF3B : 1 occurrences
Couleur #33CDE350 : 1 occurrences
Couleur #4847155C : 1 occurrences
Couleur #BB6F2219 : 1 occurrences
Couleur #BA9B7DF5 : 1 occurrences
Couleur #0BE11A1C : 1 occurrences
Couleur #7F23F829 : 1 occurrences
Couleur #F8A41B13 : 1 occurrences
Couleur #B5CA4EE8 : 1 occurrences
Couleur #983238E0 : 1 occurrences
Couleur #794D3D34 : 1 occurrences
Couleur #BC5F4E77 : 1 occurrences
Couleur #FACB6C05 : 1 occurrences
Couleur #AC86212B : 1 occurrences
Couleur #AA1A55A2 : 1 occurrences
Couleur #BE70B573 : 1 occurrences
Couleur #3B045CD3 : 1 occurrences
Couleur #3694B3AF : 1 occurrences
Couleur #E2F0E49E : 1 occurrences
Couleur #4F321549 : 1 occurrences
Couleur #FD824EA9 : 1 occurrences
Couleur #0870D4B2 : 1 occurrences
Couleur #8A295448 : 1 occurrences
Couleur #9A0ABCD5 : 1 occurrences
Couleur #0E18A844 : 1 occurrences
Couleur #AC5BF38E : 1 occurrences
Couleur #4CD72D9B : 1 occurrences
Couleur #0942E506 : 1 occurrences
Couleur #C433AFCD : 1 occurrences
Couleur #A3847F2D : 1 occurrences
Couleur #ADD47647 : 1 occurrences
Couleur #DE321CEC : 1 occurrences
Couleur #4AC430F6 : 1 occurrences
Couleur #2023856C : 1 occurrences
Couleur #FBB20704 : 1 occurrences
Couleur #F4EC0BB9 : 1 occurrences
Couleur #20BA86C3 : 1 occurrences
Couleur #3E05F1EC : 1 occurrences
Couleur #D96733B7 : 1 occurrences
Couleur #9950A3E3 : 1 occurrences
Couleur #14D3D934 : 1 occurrences
Couleur #F75EA0F2 : 1 occurrences
Couleur #10A8F605 : 1 occurrences
Couleur #9401BEB4 : 1 occurrences
Couleur #BC4478FA : 1 occurrences
Couleur #4969E623 : 1 occurrences
Couleur #D01ADA69 : 1 occurrences
Couleur #6A7E4C7E : 1 occurrences
Couleur #5125B348 : 1 occurrences
Couleur #84533A94 : 1 occurrences
Couleur #FB319990 : 1 occurrences
Couleur #325744EE : 1 occurrences
Couleur #9BBCE9E5 : 1 occurrences
Couleur #25CF08F5 : 1 occurrences
Couleur #E9E25E53 : 1 occurrences
Couleur #60AAD2B2 : 1 occurrences
Couleur #D085FA54 : 1 occurrences

*/