/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/


#include <stdio.h>
#include <stdlib.h>
#include "operator.h" // Inclure pour les fonctions de calcul

int main(int argc, char *argv[]) {
    // Vérifier si le nombre d'arguments est suffisant
    if (argc < 4) {
        printf("Usage : %s <opérateur> <nombre1> <nombre2>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];     // Prendre le premier caractère de l'opérateur
    int num1 = atoi(argv[2]);  // Convertir le deuxième argument en entier
    int num2 = atoi(argv[3]);  // Convertir le troisième argument en entier
    int res;

    // Exécuter l'opération en fonction de l'opérateur
    switch (op) {
        case '+':
            res = somme(num1, num2);
            break;
        case '-':
            res = difference(num1, num2);
            break;
        case 'x':
        case '*':
            res = produit(num1, num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erreur : Division par zéro\n");
                return 1;
            }
            res = quotient(num1, num2);
            break;
        case '%':
            if (num2 == 0) {
                printf("Erreur : Division par zéro\n");
                return 1;
            }
            res = modulo(num1, num2);
            break;
        case '&':
            res = et(num1, num2);
            break;
        case '|':
            res = ou(num1, num2);
            break;
        case '~':
            res = negation(num1);
            printf("Le résultat de ~%d est %d\n", num1, res);
            return 0;
        default:
            printf("Opérateur non pris en charge : %c\n", op);
            return 1;
    }

    printf("Le résultat de %d %c %d est %d\n", num1, op, num2, res);
    return 0;
}
