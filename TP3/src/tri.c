/*
02/10/2024 TP3 Ex3.3 : Tri croissant d'un tableau
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T[100]; // Déclaration d'un tableau de 100 entiers
    int i, j, c; // Variables pour les boucles et la variable temporaire pour les échanges
    int N = 100; // Taille du tableau  

    // Remplissage du tableau avec des nombres aléatoires entre 1 et 1000
    for(i = 0; i < N; i++) {
        T[i] = (rand() % 1000) + 1;  
    }

    
    // Parcours de chaque élément du tableau pour le comparer avec tous les suivants
    for(i = 0; i < N-1; i++) {
        for(j = i+1; j < N; j++) {
            // Si l'élément courant est plus grand que celui comparé, on les échange
            if (T[i] > T[j]) {
                c = T[i];  // Utilisation de la variable temporaire 'c' pour l'échange
                T[i] = T[j];
                T[j] = c;
            }
        }
    }

    // Affichage des éléments du tableau trié
    for(i = 0; i < N; i++) {
        printf("T[%d] = %d\n", i, T[i]); // Affiche l'indice et la valeur de chaque élément du tableau
    }

    return 0;  
}

/* Resultat :

T[0] = 12
T[1] = 13
T[2] = 23
T[3] = 28
T[4] = 43
T[5] = 44
T[6] = 59
T[7] = 60
T[8] = 61
T[9] = 68
T[10] = 70
T[11] = 85
T[12] = 88
T[13] = 92
T[14] = 95
T[15] = 124
T[16] = 125
T[17] = 136
T[18] = 168
T[19] = 171
T[20] = 173
T[21] = 179
T[22] = 199
T[23] = 212
T[24] = 227
T[25] = 230
T[26] = 277
T[27] = 282
T[28] = 306
T[29] = 314
T[30] = 316
T[31] = 325
T[32] = 328
T[33] = 336
T[34] = 337
T[35] = 363
T[36] = 365
T[37] = 368
T[38] = 369
T[39] = 369
T[40] = 371
T[41] = 374
T[42] = 384
T[43] = 387
T[44] = 394
T[45] = 400
T[46] = 404
T[47] = 414
T[48] = 422
T[49] = 422
T[50] = 427
T[51] = 430
T[52] = 435
T[53] = 457
T[54] = 493
T[55] = 506
T[56] = 527
T[57] = 531
T[58] = 538
T[59] = 540
T[60] = 541
T[61] = 546
T[62] = 568
T[63] = 583
T[64] = 585
T[65] = 587
T[66] = 650
T[67] = 652
T[68] = 677
T[69] = 691
T[70] = 730
T[71] = 737
T[72] = 740
T[73] = 751
T[74] = 755
T[75] = 764
T[76] = 778
T[77] = 783
T[78] = 785
T[79] = 789
T[80] = 794
T[81] = 803
T[82] = 809
T[83] = 815
T[84] = 847
T[85] = 858
T[86] = 863
T[87] = 863
T[88] = 874
T[89] = 887
T[90] = 896
T[91] = 916
T[92] = 920
T[93] = 926
T[94] = 927
T[95] = 930
T[96] = 933
T[97] = 957
T[98] = 981
T[99] = 997

*/