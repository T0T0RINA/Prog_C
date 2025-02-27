/* 
25/09/2024 TP2 Ex2.5 : Gestion des Données Étudiantes en C
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h> 
#include <math.h> 

// Définitions des constantes pour les chaînes et le nombre d'étudiants si on met pas en define il y aura des problemes dans la boucle
#define MAX_CHAINE 64  // Taille maximale d'une chaîne (nom, prénom, adresse)
#define MAX_ETUDIANTS 5  // Nombre maximum d'étudiants

int main() {
    // Déclaration des tableaux contenant les informations des étudiants

    // Tableau de noms de famille des étudiants, avec une taille maximale de 64 caractères pour chaque nom
    char noms[][MAX_CHAINE] = {"Dupont", "Martin", "Durand", "Leroy", "Bernard"};
    
    // Tableau des prénoms des étudiants
    char prenoms[][MAX_CHAINE] = {"Jean", "Marie", "Pierre", "Luc", "Sophie"};
    
    // Tableau des adresses des étudiants
    char adresses[][MAX_CHAINE] = {
        "123 Rue", 
        "45 Avenue", 
        "78 Boulevard", 
        "9 Place", 
        "101 Ruelle"
    };
    
    // Tableau des notes 1 pour chaque étudiant
    float notes_1[] = {14.5, 12.0, 16.0, 10.5, 18.0};  
    
    // Tableau des notes 2 pour chaque étudiant
    float notes_2[] = {15.0, 13.5, 17.0, 11.0, 19.0};   

    int i = 0;

    // Boucle pour afficher les informations de chaque étudiant
    for (; i < MAX_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);   
        printf("Nom: %s\n", noms[i]);   
        printf("Prénom: %s\n", prenoms[i]);   
        printf("Adresse: %s\n", adresses[i]);   
        printf("Note 1: %.2f\n", notes_1[i]);   
        printf("Note 2: %.2f\n", notes_2[i]);   
        printf("\n"); 
    }

    return 0;   
}

/* Resultat :

Etudiant 1 :
Nom: Dupont
Prénom: Jean
Adresse: 123 Rue
Note 1: 14.50
Note 2: 15.00

Étudiant 2 :
Nom: Martin
Prénom: Marie
Adresse: 45 Avenue
Note 1: 12.00
Note 2: 13.50

Étudiant 3 :
Nom: Durand
Prénom: Pierre
Adresse: 78 Boulevard
Note 1: 16.00
Note 2: 17.00

Étudiant 4 :
Nom: Leroy
Prénom: Luc
Adresse: 9 Place
Note 1: 10.50
Note 2: 11.00

Étudiant 5 :
Nom: Bernard
Prénom: Sophie
Adresse: 101 Ruelle
Note 1: 18.00
Note 2: 19.00

*/