/*
18/09/2024 TP1 Ex1.8 : Utilisation de l'opérateur switch pour des opérations mathématiques
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 2;
    char op = '+';

    switch (op) {
    case '+' :
        printf("Résultat : num1 + num2 = %d\n", num1+num2);
        break;
    case '-' :
        printf("Résultat : num1 - num2 = %d\n", num1-num2);
        break;
    case '*' :
        printf("Résultat : num1 * num2 = %d\n", num1*num2);
        break;
    case '/' :
        printf("Résultat : num1 / num2 = %d\n", num1/num2);
        break;
    case '%' :
        printf("Résultat : num1 modulo num2 = %d\n", num1%num2);
        break;
    case '|' :
        printf("Résultat : num1 | num2 = %d\n", num1|num2);
        break;
    case '~' :
        printf("Résultat ~num1 : %d\n", ~num1);
        printf("Résultat ~num2 : %d\n", ~num2);
        break;
    }

    return 0;
}

/*Résultat (avec num1 = 1, num2 = 2 et op = '+') :

Résultat : num1 + num2 = 3

*/