#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

void Joueur_ordinateur(void)
{
    //recherche des cases jouables
    char* c_possible= malloc(sizeof(char));
     for (i=0 ; i<8 ; i++)
    {
        for (j=0 ; j<8 ; j++)
        {
            if (((((((valide_verticale_haut(Table T,int i,int j,char coup)=true || valide_verticale_bas(Table T,int i,int j,char coup)=true)|| valide_horizontale_droite(Table T,int i,int j,char coup))|| valide_horizontale_gauche(Table T,int i,int j,char coup))|| valide_diagonale_haut_droit(Table T,int i,int j,char coup))|| valide_diagonale_haut_gauche(Table T,int i,int j,char coup))|| valide_diagonale_bas_droit(Table T,int i,int j,char coup))|| valide_diagonale_bas_gauche(Table T,int i,int j,char coup));
                c_possible=c_possible + T[i][j]
            }
    srand(time(NULL));
    char coup_choisi=c_possible(rand()% sizeof(c_possible));
    int entrer_son_coup(Table T, char coup_choisi)
        }
    }
}

