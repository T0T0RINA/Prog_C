/*
18/09/2024 TP1 Ex1.4 : Affectation et affichage des variables de types de base
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    // Déclaration des variables
    char char_var = 'A';
    unsigned char uchar_var = 200;

    short short_var = -32768;
    unsigned short ushort_var = 65535;

    int int_var = -2147483647;
    unsigned int uint_var = 4294967295;

    long int long_var = -2147483648;
    unsigned long int ulong_var = 4294967295;

    long long int longlong_var = -9223372036854775807;
    unsigned long long int ulonglong_var = 18446744073709551615U;

    float float_var = 3.14f;
    double double_var = 3.141592653589793;
    long double longdouble_var = 3.14159265358979323846L;

    // Affichage des valeurs
    printf("char: %c\n", char_var);
    printf("unsigned char: %u\n", uchar_var);

    printf("short: %d\n", short_var);
    printf("unsigned short: %u\n", ushort_var);

    printf("int: %d\n", int_var);
    printf("unsigned int: %u\n", uint_var);

    printf("long int: %ld\n", long_var);
    printf("unsigned long int: %lu\n", ulong_var);

    printf("long long int: %lld\n", longlong_var);
    printf("unsigned long long int: %llu\n", ulonglong_var);

    printf("float: %.2f\n", float_var);
    printf("double: %.15f\n", double_var);
    printf("long double: %.20Lf\n", longdouble_var);

    return 0;
}

/* Résultat :
char: A
unsigned char: 200
short: -32768
unsigned short: 65535
int: -2147483647
unsigned int: 4294967295
long int: -2147483648
unsigned long int: 4294967295
long long int: -9223372036854775807
unsigned long long int: 18446744073709551615
float: 3.14
double: 3.141592653589793
long double: 3.14159265358979323851
*/