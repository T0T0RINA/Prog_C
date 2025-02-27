/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Initialisation de la liste (tête pointe vers NULL)
void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

// Fonction d'insertion d'une couleur dans la liste
void insertion(struct couleur *nouvelle_couleur, struct liste_couleurs *liste) {
    struct noeud *nouveau_noeud = malloc(sizeof(struct noeud));
    if (nouveau_noeud == NULL) {
        printf("Erreur : allocation de mémoire échouée\n");
        return;
    }

    // Copier la couleur et insérer en tête de liste
    nouveau_noeud->couleur = *nouvelle_couleur;
    nouveau_noeud->suivant = liste->tete;
    liste->tete = nouveau_noeud;
}

// Fonction pour parcourir et afficher la liste de couleurs
void parcours(const struct liste_couleurs *liste) {
    struct noeud *courant = liste->tete;
    int index = 1;

    while (courant != NULL) {
        printf("Couleur %d : R=%02X, G=%02X, B=%02X, A=%02X\n", index,
               courant->couleur.r, courant->couleur.g, courant->couleur.b, courant->couleur.a);
        courant = courant->suivant;
        index++;
    }
}
