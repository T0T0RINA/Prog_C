/*
02/10/2024 TP3 Ex3.1 : Comprendre la taille des types de données
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    
    // Affiche la taille d'un entier (int) en octets
    printf("La taille de int est : %lu octets\n", sizeof(int));
    
    // Affiche la taille d'un pointeur vers un entier (int*) en octets
    printf("La taille de int* est : %lu octets\n", sizeof(int*));
    
    // Affiche la taille d'un pointeur vers un pointeur d'entier (int**) en octets
    printf("La taille de int** est : %lu octets\n", sizeof(int**));
    
    // Affiche la taille d'un pointeur vers un caractère (char*) en octets
    printf("La taille de char* est : %lu octets\n", sizeof(char*));
    
    // Affiche la taille d'un pointeur vers un pointeur de caractère (char**) en octets
    printf("La taille de char** est : %lu octets\n", sizeof(char**));
    
    // Affiche la taille d'un pointeur vers un pointeur de pointeur de caractère (char***) en octets
    printf("La taille de char*** est : %lu octets\n", sizeof(char***));
    
    // Affiche la taille d'un pointeur vers un flottant (float*) en octets
    printf("La taille de float* est : %lu octets\n", sizeof(float*));
    
    // Affiche la taille d'un pointeur vers un pointeur de flottant (float**) en octets
    printf("La taille de float** est : %lu octets\n", sizeof(float**));
    
    // Affiche la taille d'un pointeur vers un pointeur de pointeur de flottant (float***) en octets
    printf("La taille de float*** est : %lu octets\n", sizeof(float***));
    
    return 0;  
}

/* Resultat:
La taille de int est : 4 octets
La taille de int* est : 8 octets
La taille de int** est : 8 octets
La taille de char* est : 8 octets
La taille de char** est : 8 octets
La taille de char*** est : 8 octets
La taille de float* est : 8 octets
La taille de float** est : 8 octets
La taille de float*** est : 8 octets
*/