/*
18/09/2024 TP1 Ex1.2 : Calcul de l'aire et du périmètre d'un cercle en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <math.h>

int main() {
float rayon = 2.5;
float aire = M_PI*rayon*rayon; // a = pi.r²
float perimetre = 2*M_PI*rayon; // p = 2.pi.r
printf("l'aire du cercle est de : %f\n", aire);
printf("le périmètre du cercle est de : %f\n", perimetre);

return 0;
}

//Resultat :
//l'aire du cercle est de : 19.634954
//le périmètre du cercle est de : 15.707963