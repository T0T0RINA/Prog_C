/*
02/10/2024 TP3 Ex3.6 : Affichage des octets de différents types de données
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <math.h>  // Pour utiliser INFINITY

int main() {
    //Les valeurs sont trouvées avec des convertisseurs de valeurs.
    short a = 0x0302;
    int b = 67305985;
    long int c = 578437695752307201;
    float d = 1.5195433e-28f;
    double e = 1.0;
    long double f = INFINITY; // ici les convertisseurs donnaient une valeur infini

    // Affichage des octets de short
    unsigned char *bytePointer = (unsigned char*)&a;  
    printf("Les octets de short sont : ");
    for (int i = 0; i < sizeof(short); i++) {
        printf("%02x ", bytePointer[i]);  
    }
    printf("\n");

    // Affichage des octets de int
    unsigned char *bytePointer1 = (unsigned char*)&b;  
    printf("Les octets de int sont : "); 
    for (int i = 0; i < sizeof(int); i++) { 
        printf("%02x ", bytePointer1[i]);  
    }
    printf("\n");

    // Affichage des octets de long int
    unsigned char *bytePointer2 = (unsigned char*)&c;  
    printf("Les octets de long int sont : ");
    for (int i = 0; i < sizeof(long int); i++) { 
        printf("%02x ", bytePointer2[i]);  
    }
    printf("\n");

    // Affichage des octets de float
    unsigned char *bytePointer4 = (unsigned char*)&d; 
    printf("Les octets de float sont : ");
    for (int i = 0; i < sizeof(float); i++) { 
        printf("%02x ", bytePointer4[i]);  
    }
    printf("\n"); 

    // Affichage des octets de double
    unsigned char *bytePointer5 = (unsigned char*)&e; 
    printf("Les octets de double sont : ");
    for (int i = 0; i < sizeof(double); i++) { 
        printf("%02x ", bytePointer5[i]);  
    }
    printf("\n"); 
    
    // Affichage des octets de long double
    unsigned char *bytePointer6 = (unsigned char*)&f; 
    printf("Les octets de long double sont : ");
    for (int i = 0; i < sizeof(long double); i++) { 
        printf("%02x ", bytePointer6[i]);  
    }
    printf("\n");

    return 0;
}

/* Resultat :
Les octets de short sont : 02 03 
Les octets de int sont : 01 02 03 04 
Les octets de long int sont : 01 02 03 04 05 06 07 08 
Les octets de float sont : 00 a0 40 11 
Les octets de double sont : 00 00 00 00 00 00 f0 3f 
Les octets de long double sont : 00 00 00 00 00 00 00 80 ff 7f 00 00 00 00 00 00 
*/