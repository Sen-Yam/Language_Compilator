#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//déclaration de la Pile CETTE PILE EST POUR LE TRAITEMENT DES EXPRESSION ARITHMETIQUE
typedef struct EPile* Pile;
typedef struct EPile { int  Val; Pile Suiv;} CelluleP;


Pile pile_tmps=NULL;


//primitives des Piles
//procedure Initpile

/* void Initpile()
{pile_tmps=NULL;} */

//procedure Empiler
void Empiler(int x)
{Pile V;
 V=malloc(sizeof(CelluleP));
 V->Val=x;
 V->Suiv=pile_tmps;
 pile_tmps=V;
}

//procedure Depiler
int Depiler()
{Pile V;
 int x;
 x= pile_tmps->Val;
 V=pile_tmps;
 pile_tmps=(pile_tmps)->Suiv;
 free(V);

 return x;
}

//Fonction Pilevide
int Pilevide()
{if (pile_tmps==NULL) return 1;
 else return 0;
}

//Fonction SommetPile
floatSommetPile(){
    if(Pilevide()){printf(" WARNING LA PILE EST VIDE \n");return -1;}
    else{return pile_tmps->Val;}

}
void Afficher_pile(){
    Pile V;
    V=pile_tmps;
    printf("\n============================================ etat pile ==========================");
    while(V!=NULL){
        
        printf(" \ntmps valeur : %d ",V->Val);
        V= V->Suiv;
    }
}


/*
// Dans le cas des if et boucle imbrique le sauvgrade et la mise a jour du quads risque d'etre ecrase
// par de nouvelle valeur dans le cas d'imbriquation 
// d'ou l'utilisation d'une pile de INT pour sauvgarder

Pile pile_sauv_maj;

void Empiler_sm(floatx)
{Pile V;
 V=malloc(sizeof(CelluleP));
 V->Val=x;
 V->Suiv=pile_sauv_maj;
 pile_sauv_maj=V;
 
}

//procedure Depiler
int Depiler_sm()
{Pile V;
 int x;
 x= pile_sauv_maj->Val;
 V=pile_tmps;
 pile_sauv_maj=(pile_sauv_maj)->Suiv;
 free(V);

 return x;
}*/

