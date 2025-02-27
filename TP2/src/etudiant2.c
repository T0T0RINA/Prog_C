/*
25/09/2024 TP2 Ex2.6 : Gestion des Données d'Étudiant.e.s en C avec des Structures
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <string.h>

// Structure pour représenter un étudiant
struct Etudiant {
    char nom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    // Création d'un tableau de 5 étudiant.e.s
    struct Etudiant etudiants[5];

    // Initialisation des membres de la structure avec strcpy

    // Etudiant 1
    strcpy(etudiants[0].nom, "ROCHER Pierre");
    strcpy(etudiants[0].adresse, "44 Rue du moulin");
    etudiants[0].note_prog = 2;
    etudiants[0].note_sys = 18;

    // Etudiant 2
    strcpy(etudiants[1].nom, "DUPONT Martin");
    strcpy(etudiants[1].adresse, "2 Rue BICEPS");
    etudiants[1].note_prog = 4;
    etudiants[1].note_sys = 11;

    //Etudiant 3
    strcpy(etudiants[2].nom, "DUBOIS Martine");
    strcpy(etudiants[2].adresse, "48 Cours Gambett");
    etudiants[2].note_prog = 19;
    etudiants[2].note_sys = 10;

    //Etudiant 4
    strcpy(etudiants[3].nom, "COTTY René");
    strcpy(etudiants[3].adresse, "69 Rue du Plat");
    etudiants[3].note_prog = 9;
    etudiants[3].note_sys = 16;

    //Etudiant 5
    strcpy(etudiants[4].nom, "ZIDANE Zinédine");
    strcpy(etudiants[4].adresse, "10 Rue des alouettes");
    etudiants[4].note_prog = 19;
    etudiants[4].note_sys = 1;

  

    // Affichage des données de tous les étudiant.e.s
    for (int i = 0; i < 5; i++) {
        printf("Étudiant(e) %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Prog : %.1f\n", etudiants[i].note_prog);
        printf("Note Sys : %.1f\n", etudiants[i].note_sys);
        printf("\n");
    }

    return 0;
}

/*Résultat :

Étudiant(e) 1 :
Nom : ROCHER Pierre
Adresse : 4 Rue du chemin de la rue
Note 1 : 2.0
Note 2 : 18.0

Étudiant(e) 2 :
Nom : DUPONT Martin
Adresse : 2 Rue BICEPS
Note 1 : 4.0
Note 2 : 16.0

Étudiant(e) 3 :
Nom : DUBOIS Martine
Adresse : 48 Cours Gambett
Note 1 : 19.0
Note 2 : 1.0

Étudiant(e) 4 :
Nom : DURIFF Sylvain
Adresse : 69 Rue Platini
Note 1 : 3.0
Note 2 : 17.0

Étudiant(e) 5 :
Nom : ZIDANE Zinédine
Adresse : 10 Rue des alouettes
Note 1 : 20.0
Note 2 : 0.0

*/