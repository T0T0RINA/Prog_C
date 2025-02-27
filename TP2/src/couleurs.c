/*
25/09/2024 TP2 Ex2.7 : Gestion des Couleurs en Format RGBA avec des Structures
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

// Définition de la structure qui représente une couleur en format RGBA
struct Couleur {
    unsigned char rouge; //unsigned char sinon on a des nombres négatifs
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    // Déclaration et initialisation d'un tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0x1f},
        {0x2c, 0xc8, 0x64, 0x3f},
        {0xde, 0x45, 0x3a, 0x8f},
        {0x89, 0xbc, 0x34, 0xff},
        {0xff, 0x99, 0x00, 0xaf},
        {0x00, 0xff, 0x99, 0x5f},
        {0x7f, 0x12, 0xac, 0x6f},
        {0x11, 0x22, 0x33, 0x9f},
        {0x66, 0x44, 0x22, 0xcf},
        {0xcc, 0xdd, 0xee, 0xef}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert : %d\n", couleurs[i].vert);
        printf("Bleu : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n", couleurs[i].alpha);
        printf("\n");
    }

    return 0;
}

/*Résultat :

Couleur 1 :
Rouge : 239
Vert : 120
Bleu : 18
Alpha : 31

Couleur 2 :
Rouge : 44
Vert : 200
Bleu : 100
Alpha : 63

Couleur 3 :
Rouge : 222
Vert : 69
Bleu : 58
Alpha : 143

Couleur 4 :
Rouge : 137
Vert : 188
Bleu : 52
Alpha : 255

Couleur 5 :
Rouge : 255
Vert : 153
Bleu : 0
Alpha : 175

Couleur 6 :
Rouge : 0
Vert : 255
Bleu : 153
Alpha : 95

Couleur 7 :
Rouge : 127
Vert : 18
Bleu : 172
Alpha : 111

Couleur 8 :
Rouge : 17
Vert : 34
Bleu : 51
Alpha : 159

Couleur 9 :
Rouge : 102
Vert : 68
Bleu : 34
Alpha : 207

Couleur 10 :
Rouge : 204
Vert : 221
Bleu : 238
Alpha : 239

*/