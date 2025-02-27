/* 
25/09/2024 TP2 Ex2.9 : Manipulation de Tableaux avec des Pointeurs
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    // Création des deux tableaux vides    
    int tableauint[20];
    float tableaufloat[20];

    // Création des deux pointeurs
    int *ptrint = tableauint;
    float *ptrfloat = tableaufloat;

    srand(time(NULL)); // Initialisation de la graine du générateur de nombre aléatoire

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < 20; i++) {
        *(ptrint + i) = rand() % 100; // Génère un entier aléatoire entre 0 et 99
        *(ptrfloat + i) = (rand() % 10000) / 100.0; // Génère un flottant aléatoire entre 0.00 et 99.99
    }

    // Affichage des tableaux
    printf("Tableau d'entiers (avant la multiplication par 3) : \n");
    for (int i = 0; i < 20; i++) {
        printf("<%d> ", *(ptrint + i));
    }

    printf("\n\nTableau de nombres à virgule flottante (avant la multiplication par 3) : \n");
    for (int i = 0; i < 20; i++) {
        printf("<%.2f> ", *(ptrfloat + i));
    }

    // Multiplication des valeurs dont l'indice est divisible par 2
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            *(ptrint + i) *= 3;
            *(ptrfloat + i) *= 3;
        }
    }

    // Affichage des tableaux
    printf("\n\nTableau d'entiers (après la multiplication par 3) : \n");
    for (int i = 0; i < 20; i++) {
        printf("<%d> ", *(ptrint + i));
    }

    printf("\n\nTableau de nombres à virgule flottante (après la multiplication par 3) : \n");
    for (int i = 0; i < 20; i++) {
        printf("<%.2f> ", *(ptrfloat + i));
    }

    printf("\n");
    return 0;
}


/*Résultat :

Tableau d'entiers (avant la multiplication par 3) : 
<56> <25> <20> <87> <25> <27> <86> <93> <64> <30> <2> <11> <18> <19> <44> <25> <67> <44> <43> <87> 

Tableau de nombres à virgule flottante (avant la multiplication par 3) : 
<4.91> <45.91> <29.40> <12.48> <53.19> <8.60> <5.55> <62.56> <73.50> <39.48> <6.34> <94.51> <9.50> <80.59> <41.23> <57.53> <53.51> <31.87> <68.32> <95.68> 

Tableau d'entiers (après la multiplication par 3) : 
<168> <25> <60> <87> <75> <27> <258> <93> <192> <30> <6> <11> <54> <19> <132> <25> <201> <44> <129> <87> 

Tableau de nombres à virgule flottante (après la multiplication par 3) : 
<14.73> <45.91> <88.20> <12.48> <159.57> <8.60> <16.65> <62.56> <220.50> <39.48> <19.02> <94.51> <28.50> <80.59> <123.69> <57.53> <160.53> <31.87> <204.96> <95.68> 

*/