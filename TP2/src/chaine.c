/* 
25/09/2024 TP2 Ex2.4 : Manipulation de Chaînes de Caractères en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    char mot1[] = "Hello";  
    char mot2[] = " World!"; 
    
    int longueur1 = 0, longueur2 = 0;  // Variables pour stocker les longueurs des chaînes
    
    // Boucle pour calculer la longueur de 'mot1'
    while (mot1[longueur1] != '\0') {  // Tant que le caractère courant n'est pas '\0' (fin de la chaîne)
        longueur1++;  // On incrémente la longueur
    }

    // Boucle pour calculer la longueur de 'mot2'
    while (mot2[longueur2] != '\0') {  // Même logique que pour 'mot1'
        longueur2++;
    }

    // Affichage des longueurs des deux mots
    printf("Longueur de mot1 : %d\n", longueur1);
    printf("Longueur de mot2 : %d\n", longueur2);
    
    // Création d'une copie de 'mot1' dans 'copie_mot1'
    char copie_mot1[100];  //tableau suffisamment grand pour contenir 'mot1'
    int i = 0;
    
    // Boucle pour copier 'mot1' dans 'copie_mot1'
    while (mot1[i] != '\0') {  // Tant que 'mot1' n'a pas atteint la fin
        copie_mot1[i] = mot1[i];  // Copie du caractère
        i++;
    }
    copie_mot1[i] = '\0';  // Ajout du caractère nul à la fin de la copie

    // Affichage de la copie de 'mot1'
    printf("Copie de mot1 : %s\n", copie_mot1);
    
    //chaîne 'concatenation' qui contiendra la concaténation de 'mot1' et 'mot2'
    char concatenation[200];  //tableau suffisamment grand pour contenir les deux mots concaténés
    i = 0;
    
    // Boucle pour copier 'mot1' dans 'concatenation'
    while (mot1[i] != '\0') {  
        concatenation[i] = mot1[i];
        i++;
    }

    int j = 0;
    // Boucle pour copier 'mot2' à la suite de 'mot1' dans 'concatenation'
    while (mot2[j] != '\0') {   
        concatenation[i] = mot2[j];
        i++;
        j++;
    }
    concatenation[i] = '\0';  // Ajout du caractère nul à la fin  

    // Affichage de la concaténation des deux mots
    printf("Concaténation des deux mots : %s\n", concatenation);

    return 0;   
}

/* Resultat :
Longueur de mot1 : 5
Longueur de mot2 : 7
Copie de mot1 : Hello
Concaténation des deux mots : Hello World!
*/
