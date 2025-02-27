/* 
25/09/2024 TP2 Ex2.1 : Calcul de la Puissance en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h> 
#include <math.h> 
 
int main() {
    int a = 4;  // Base
    int b = 3;  // Exposant
    int c = 1;  // Résultat de la puissance, initialisé à 1
    int n = 0;  // Variable de boucle pour effectuer la multiplication répétée

    // Boucle pour calculer a^b en multipliant a par lui-même b fois
    for (; n < b; n++) {
        c = c * a;  // Multiplication répétée de c par a
    }

    // Affichage du résultat de a^b
    printf("Puissance = %d\n", c);

    return 0;   
}
// Puissance = 64