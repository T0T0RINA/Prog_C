/*
18/09/2024 TP1 Ex1.6 : Affichage d'un triangle rectangle avec des boucles
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {
    int compteur = 7;  // Le compteur définit la hauteur du triangle (ici, 7 lignes)

    // Version avec boucle for
    int bcl1 = 1;
    for(; bcl1 <= compteur; bcl1++){  // Première boucle 'for' contrôle les lignes du triangle
        int i = 0;
        for(; i < bcl1; i++){  // Deuxième boucle 'for' contrôle les colonnes de chaque ligne
            if(i == 0){  
                // Si c'est la première colonne de la ligne, on affiche une étoile (*)
                printf("*");
            } else if(i + 1 == bcl1) {
                // Si c'est la dernière colonne de la ligne, on affiche une étoile (*)
                printf("*");
            } else if(bcl1 == compteur) {
                // Si c'est la dernière ligne, on remplit uniquement avec des étoiles (*)
                printf("*");
            } else {
                // Pour toutes les autres colonnes, on affiche un dièse (#)
                printf("#");
            }
            
        }
        printf("\n");
    }

    printf("\n\n");

    // Version avec while
    int bcl2 = 1;
    while(bcl2 <= compteur){  // Boucle while similaire à la boucle for, elle contrôle les lignes
        int i = 0;
        for(; i < bcl2 ; i++){  // Boucle imbriquée for qui contrôle les colonnes comme dans la version for
            
            // Les mêmes conditions sont utilisées ici pour afficher les caractères dans chaque lignes
            if(i == 0){
                printf("*");
            } else if(i + 1 == bcl2) {
                printf("*");
            } else if(bcl2 == compteur) {
                printf("*");
            } else {
                printf("#");
            }
        }
        printf("\n");
        bcl2++;  // Incrémentation de la variable quand on passe à la ligne suivante
    }

    return 0;
}

/*Résultat (avec compteur = 7):

*
**
*#*
*##*
*###*
*####*
*******

*
**
*#*
*##*
*###*
*####*
*******

*/