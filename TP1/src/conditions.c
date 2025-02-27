/*
18/09/2024 TP1 Ex1.7 : Conditions et boucles avec divisibilité
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main() {

    int somme = 0;
    int nbr = 0;
    for(;nbr<1001;nbr++){ 
        if(somme>5000){ //si on dépasse 5000 on arrête immédiatement la boucle grace à "break"
            break;
        }
        if(nbr%11==0){ //si divisible par 11, on reboucle tout de suite pour éviter la condition suivante grace à "continue"
            continue;
        }
        if(nbr%5==0 || nbr%7==0){
            somme += nbr;
        }
    }
    printf("La somme est de : %d\n", somme);

    return 0;
}

/*Résultat
La somme est de : 5075
*/