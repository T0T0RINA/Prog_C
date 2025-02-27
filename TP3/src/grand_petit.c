/*
02/10/2024 TP3 Ex3.2 : Trouver le numéro le plus grand et le plus petit dans un tableau
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tableau[100]; // Déclaration d'un tableau de 100 entiers
    int i = 0; // Variable pour les boucles

    // Remplissage du tableau avec des nombres aléatoires compris entre 1 et 1000
    for (; i < 100; i++) {
        tableau[i] = (rand() % 1000) + 1;  
    }

    // Boucle pour afficher les valeurs du tableau
    for (i = 0; i < 100; i++) {
        printf("tableau[%d] = %d\n", i, tableau[i]);  
    }

    int a = tableau[0]; // Initialisation de la variable pour le plus grand nombre avec la première valeur du tableau
    int b = tableau[0]; // Initialisation de la variable pour le plus petit nombre avec la première valeur du tableau

    // Parcours du tableau pour trouver le plus grand et le plus petit nombre
    for (i = 0; i < 100; i++) {
        if (tableau[i] > a) { // Si la valeur actuelle est plus grande que 'a', elle devient la nouvelle valeur maximale
            a = tableau[i]; 
        }
        if (tableau[i] < b) { // Si la valeur actuelle est plus petite que 'b', elle devient la nouvelle valeur minimale
            b = tableau[i];   
        }
    }

    // Affichage des résultats
    printf("plus grand = %d\n", a);  
    printf("plus petit = %d\n", b);  

    return 0;  
}

/* Resulat:

tableau[0] = 384
tableau[1] = 887
tableau[2] = 778
tableau[3] = 916
tableau[4] = 794
tableau[5] = 336
tableau[6] = 387
tableau[7] = 493
tableau[8] = 650
tableau[9] = 422
tableau[10] = 363
tableau[11] = 28
tableau[12] = 691
tableau[13] = 60
tableau[14] = 764
tableau[15] = 927
tableau[16] = 541
tableau[17] = 427
tableau[18] = 173
tableau[19] = 737
tableau[20] = 212
tableau[21] = 369
tableau[22] = 568
tableau[23] = 430
tableau[24] = 783
tableau[25] = 531
tableau[26] = 863
tableau[27] = 124
tableau[28] = 68
tableau[29] = 136
tableau[30] = 930
tableau[31] = 803
tableau[32] = 23
tableau[33] = 59
tableau[34] = 70
tableau[35] = 168
tableau[36] = 394
tableau[37] = 457
tableau[38] = 12
tableau[39] = 43
tableau[40] = 230
tableau[41] = 374
tableau[42] = 422
tableau[43] = 920
tableau[44] = 785
tableau[45] = 538
tableau[46] = 199
tableau[47] = 325
tableau[48] = 316
tableau[49] = 371
tableau[50] = 414
tableau[51] = 527
tableau[52] = 92
tableau[53] = 981
tableau[54] = 957
tableau[55] = 874
tableau[56] = 863
tableau[57] = 171
tableau[58] = 997
tableau[59] = 282
tableau[60] = 306
tableau[61] = 926
tableau[62] = 85
tableau[63] = 328
tableau[64] = 337
tableau[65] = 506
tableau[66] = 847
tableau[67] = 730
tableau[68] = 314
tableau[69] = 858
tableau[70] = 125
tableau[71] = 896
tableau[72] = 583
tableau[73] = 546
tableau[74] = 815
tableau[75] = 368
tableau[76] = 435
tableau[77] = 365
tableau[78] = 44
tableau[79] = 751
tableau[80] = 88
tableau[81] = 809
tableau[82] = 277
tableau[83] = 179
tableau[84] = 789
tableau[85] = 585
tableau[86] = 404
tableau[87] = 652
tableau[88] = 755
tableau[89] = 400
tableau[90] = 933
tableau[91] = 61
tableau[92] = 677
tableau[93] = 369
tableau[94] = 740
tableau[95] = 13
tableau[96] = 227
tableau[97] = 587
tableau[98] = 95
tableau[99] = 540
plus grand = 997
plus petit = 12

*/