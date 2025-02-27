/*
09/10/2024 TP4
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#ifndef LISTE_H
#define LISTE_H

// Structure pour représenter une couleur en RGBA
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

// Structure pour un nœud de la liste
struct noeud {
    struct couleur couleur;
    struct noeud *suivant;
};

// Structure pour la liste de couleurs
struct liste_couleurs {
    struct noeud *tete;
};

// Prototypes des fonctions
void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *nouvelle_couleur, struct liste_couleurs *liste);
void parcours(const struct liste_couleurs *liste);

#endif
