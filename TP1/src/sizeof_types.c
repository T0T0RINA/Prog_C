/*
18/09/2024 TP1 Ex1.3 : Tailles des types de base
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    printf("sizeof(char): %lu\n", sizeof (char));
    printf("sizeof(short): %lu\n", sizeof (short));
    printf("sizeof(int): %lu\n", sizeof (int));
    printf("sizeof(signed int): %lu\n", sizeof (signed int));
    printf("sizeof(long int): %lu\n", sizeof (long int));
    printf("sizeof(long long int): %lu\n", sizeof (long long int));
    printf("sizeof(float): %lu\n", sizeof (float));
    printf("sizeof(double): %lu\n", sizeof (double));
    printf("sizeof(long double): %lu\n", sizeof (long double));
}

/* Resultat :
sizeof(char): 1
sizeof(short): 2
sizeof(int): 4
sizeof(signed int): 4
sizeof(long int): 8
sizeof(long long int): 8
sizeof(float): 4
sizeof(double): 8
sizeof(long double): 16 
*/