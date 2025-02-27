/*
18/09/2024 TP1 Ex1.5 : Utilisation des opérateurs arithmétiques et logiques
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    
    //déclaration des variables
    float a = 16;
    float b = 3;
    int add = a+b;
    int sub = a-b;
    int prod = a*b;
    float div = a/b;
    int mod = (int)(a)%(int)(b); //On doit avoir des valeurs entières pour utiliser le modulo
    int egal = a==b;
    int sup = a>=b;

    //Affichage
    printf("a + b = %d\n", add);
    printf("a - b = %d\n", sub);
    printf("a * b = %d\n", prod);
    printf("a / b = %f\n", div);
    printf("reste de a / b = %d\n", mod);
    printf("a = b ? %d\n", egal);
    printf("a >= b ? %d\n", sup);

    return 0;
}

/*Résultat (avec a=16 et b=3) :
a + b = 19
a - b = 13
a * b = 48
a / b = 5.333333
reste de a / b = 1
a = b ? 0
a >= b ? 1
*/