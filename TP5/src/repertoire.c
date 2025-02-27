/* 16/10/2024 Fichier : repertoire.c
affichage des éléments contanus dans un répertoire
auteur : Kenzi BOUOUDINA & Thomas MANGIN
*/ 

#include "repertoire.h"
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void lire_dossier(char *rep) {
    // Déclaration d'un pointeur
    DIR *dirp = NULL;
    
    // ouverture du repertoire ou renvoi d'une erreur
    dirp = opendir(rep);
    if (dirp == NULL) {
        perror("opendir");
        return;
    }

    // Déclaration d'un pointeur
    struct dirent *ent;

    while (1) {
        
        ent = readdir(dirp);
        if (ent == NULL) {
            break;
        }

        // Affiche le nom de l'entrée actuelle
        printf("%s\n", ent->d_name);
    }

    closedir(dirp);
}


void lire_dossier_recursif(char *rep) {
    // Affiche le chemin du répertoire
    printf(" rep : %s\n", rep);

    // Déclaration d'un pointeur
    DIR *dirp = NULL;

    dirp = opendir(rep);
    if (dirp == NULL) {
        perror("opendir");
        return;
    }

    // Déclaration d'un pointeur
    struct dirent *ent;

    while ((ent = readdir(dirp)) != NULL) {
        // Vérifie que le nom de l'entrée n'est ni ".." ni "."
        if ((strcmp(ent->d_name, "..") != 0) && (strcmp(ent->d_name, ".") != 0)) {
            if (ent->d_type == DT_DIR) {
                // Si l'entrée est un sous-répertoire, affiche son nom.
                printf("d_name= %s\n", ent->d_name);

                // Crée un chemin complet vers le repertoire
                char chemin1[200] = "";
                strcpy(chemin1, rep);
                strcat(chemin1, "/");
                strcat(chemin1, ent->d_name);
                printf(" chemin1 : %s\n", chemin1);

                lire_dossier_recursif(chemin1);
            } else {
                // Si l'entrée est un fichier affiche son nom
                printf(" fichier : %s\n", ent->d_name);
            }
        }
    }

    closedir(dirp);
}

// Structure pour stocker le nom du répertoire et un pointeur
struct repertoire {
    char nom_rep[512];
    DIR *dirp;
};

void lire_dossier_iteratif(char *rep) {
    int i = 0;
    int j = 1;
    struct repertoire repert[512]; // tableau pour stocker les répertoires
    strcpy(repert[0].nom_rep, rep); // Copie le chemin initial dans la première entrée du tableau

    while (i < j) {
        repert[i].dirp = opendir(repert[i].nom_rep);

        if (repert[i].dirp == NULL) {
            break;
        }

        struct dirent *lecture; // Déclaration d'une structure pour lire les entrées du répertoire
        chdir(repert[i].nom_rep); // repertoire actuel comme repertoire de travail

        while (1) {
            lecture = readdir(repert[i].dirp);

            if (lecture == NULL) {
                break;
            }

            char *file_name = lecture->d_name;
            printf("%s ", file_name); // Affiche le nom de l'entrée

            // Vérification du type de l'entrée
            if (lecture->d_type && strcmp(".", file_name) && strcmp("..", file_name)) {
                // Copie du nom de l'entrée dans le tableau et ouverture du répertoire
                strcpy(repert[j].nom_rep, file_name);
                repert[j].dirp = opendir(file_name);
                j = j + 1;
            }
        }

        i = i + 1;
        putchar('\n');
        putchar('\n');
    }
}


int main(){
    char rep[100];
    printf("Indiquez le nom du répertoire: :");
    scanf("%s",rep);
    //lire_dossier(rep);
    //lire_dossier_recursif(rep);
    lire_dossier_iteratif(rep);
    return 0;
}