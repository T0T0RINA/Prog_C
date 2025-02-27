/* 
25/09/2024 TP2 Ex2.2 : Vérification des Bits en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    // Initialisation de la variable 'd' en binaire, un entier non signé sur 64 bits
    unsigned long long int d = 0b00000000000000000001000000000000; // Le bit 12 est à 1, les autres sont à 0

    // Le test ((d & (1 << 28)) > 0) vérifie si le bit 28 est à 1
    // Le test ((d & (1 << 12)) > 0) vérifie si le bit 12 est à 1
    if (((d & (1 << 28)) > 0) && ((d & (1 << 12)) > 0)) {
        // Si les deux bits 28 et 12 sont à 1, on affiche 1
        printf("1\n");
    }
    else {
        // Sinon, on affiche 0
        printf("0\n");
    }

    return 0;  
}

//Resulat:
//ici 0