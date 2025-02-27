/*
02/10/2024 TP3 Ex3.8 : Rechercher une phrase dans un tableau de phrases
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    // Déclaration d'un tableau de 10 phrases, chaque phrase ayant une taille maximale de 100 caractères
    char phrases[10][100] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    // Phrase que l'on souhaite rechercher dans le tableau
    char phrasechercher[] = "Bonjour, comment ça va ?";  

    // Cette boucle permettrait d'afficher toutes les phrases du tableau si elle était décommentée
    //for (int i = 0; i < 10; i++) {
    //    printf("Phrase[%d] : %s\n", i, phrases[i]);
    //}

    int trouvee = 0; // Variable pour indiquer si la phrase a été trouvée

    // Parcours de chaque phrase dans le tableau
    for (int i = 0; i < 10; i++) {
        int j = 0;
        // Comparaison caractère par caractère entre la phrase actuelle et la phrase cherchée
        while (phrases[i][j] == phrasechercher[j] && phrases[i][j] != '\0' && phrasechercher[j] != '\0') {
            j++; // Incrémentation tant que les caractères sont identiques et qu'on n'a pas atteint la fin des deux phrases
        }

        // Si les deux phrases se terminent en même temps (donc elles sont identiques)
        if (phrases[i][j] == '\0' && phrasechercher[j] == '\0') {
            printf("Phrase trouvée : %s\n", phrases[i]); // Affiche la phrase trouvée
            trouvee = 1; // Indique que la phrase a été trouvée
            break; // Sort de la boucle car la phrase a été trouvée
        }
    }

    // Si la phrase n'a pas été trouvée dans le tableau
    if (!trouvee) {
        printf("Phrase non trouvée dans le tableau.\n");  
    }

    return 0;  
}

/* Resultat :
Phrase trouvée : Bonjour, comment ça va ?
*/