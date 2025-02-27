/*
18/09/2024 TP1 Ex1.9 : Affichage d'un nombre en format binaire
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {

    int nbr = 6777;
    int bin[32]; // tableau dans lequel sera stocké le nombre en binaire
    int ittération = 0;

    // remplissage du tableau binaire avec la methode du reste de la division par 2
    while(nbr>0){
        bin[ittération] = nbr % 2;
        nbr /= 2;
        ittération += 1;
    }

    //affichage des bits dans le bon ordre
    printf("la représentation binaire de ce nombre est : ");
    for (int i = ittération - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }
    printf("\n");

    return 0;
}

/*Résultat (avec nbr = 6777) :
la représentation binaire de ce nombre est : 1101001111001
*/