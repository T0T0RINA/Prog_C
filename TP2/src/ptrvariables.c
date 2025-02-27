/*
25/09/2024 TP2 Ex2.8 : Manipulation des Variables de Types de Base avec des Pointeurs
Auteurs : Kenzi BOUOUDINA & Thomas MANGIN
*/

#include <stdio.h>

int main () {

    //on crée des variables de chaque type et leur affecte une valeur
    //on definit un pointeur pour chaque variable
    char a ='A';
    char *pa = &a;

    short b=7;
    short *pb= &b;
  
    int c=16;
    int *pc= &c;

    long int d=1999;
    long int *pd= &d;

    long long int e=3000001;
    long long int *pe= &e;

    float f=3.1415;
    float *pf= &f;

    double g=33.32;
    double *pg=&g;

    long double h=1234.5678;
    long double *ph=&h;

    //on affiche les valeurs de chaque variable ainsi que leur adresse
    printf("Avant la manipulation : \n");
    printf("Adresse de char : %p ; Valeur de char : %c \n",pa,*pa);
    printf("Adresse de short : %p ; Valeur de short : %hu\n",pb,*pb);
    printf("Adresse de int : %p ; Valeur de int : %d \n",pc,*pc);
    printf("Adresse de long long int : %p ; Valeur de long long int : %lli \n",pe,*pe);
    printf("Adresse de float : %p ; Valeur de float : %f \n",pf,*pf);
    printf("Adresse de double : %p ; Valeur de double : %g \n",pg,*pg);
    printf("Adress de long double : %p ; Valeur de long double : %Lg \n",ph,*ph);

    //on modifie la valeur de chaque variable grace aux pointeurs
    *pa = *pa+5;
    *pb = *pb+11;
    *pc = *pc+66;
    *pd = *pd-28;
    *pe = *pe-33;
    *pf = *pf+99;
    *pg = *pg+3;
    *ph = *ph-51;

    //on affiche les nouvelles valeurs des variables
    printf("\n Après la manipulation :\n");
    printf("Adresse de char : %p ; Valeur de char : %c \n",pa,*pa);
    printf("Adresse de short : %p ; Valeur de short : %hu\n",pb,*pb);
    printf("Adresse de int : %p ; Valeur de int : %d \n",pc,*pc);
    printf("Adresse de long long int : %p ; Valeur de long long int : %lli \n",pe,*pe);
    printf("Adresse de float : %p ; Valeur de float : %f \n",pf,*pf);
    printf("Adresse de double : %p ; Valeur de double : %g \n",pg,*pg);
    printf("Adress de long double : %p ; Valeur de long double : %Lg \n",ph,*ph);

    return 0;
}

/*Résultat :

Avant la manipulation : 
Adresse de char : 0x7fffe68fdcfd ; Valeur de char : A 
Adresse de short : 0x7fffe68fdcfe ; Valeur de short : 7
Adresse de int : 0x7fffe68fdd00 ; Valeur de int : 16 
Adresse de long long int : 0x7fffe68fdd10 ; Valeur de long long int : 3000001 
Adresse de float : 0x7fffe68fdd04 ; Valeur de float : 3.141500 
Adresse de double : 0x7fffe68fdd18 ; Valeur de double : 33.32 
Adress de long double : 0x7fffe68fdd60 ; Valeur de long double : 1234.57 

 Après la manipulation :
Adresse de char : 0x7fffe68fdcfd ; Valeur de char : F 
Adresse de short : 0x7fffe68fdcfe ; Valeur de short : 18
Adresse de int : 0x7fffe68fdd00 ; Valeur de int : 82 
Adresse de long long int : 0x7fffe68fdd10 ; Valeur de long long int : 2999968 
Adresse de float : 0x7fffe68fdd04 ; Valeur de float : 102.141502 
Adresse de double : 0x7fffe68fdd18 ; Valeur de double : 36.32 
Adress de long double : 0x7fffe68fdd60 ; Valeur de long double : 1183.57

*/