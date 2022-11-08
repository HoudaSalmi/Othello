#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Noir  'B'
#define Blanc 'w'
#define N 8
#define EMPTY ' '

/* fonction qui entre un coup pour predire le meilleur coup possible */

void entrer_coup_posterieur(Table T,int ligne,int colonne ,char coup)
{
    int i,j;
    if(coup_valide(T,ligne,colonne,coup))
        T[ligne][colonne]=coup;
    if(valide_verticale_haut(T,ligne,colonne,coup)){
        i=ligne-1;
        while(case_valide(i,colonne) && T[i][colonne]==inverse_coup(coup))
            i--;
        if(case_valide(i,colonne) && T[i][colonne]==coup)
        {   i=ligne-1;
            while(T[i][colonne]==inverse_coup(coup))
            {
                T[i][colonne]=coup;
                i--;
            } }
    }
    if(valide_verticale_bas(T,ligne,colonne,coup)){
        i=ligne+1;
        while(case_valide(i,colonne) && T[i][colonne]==inverse_coup(coup))
            i++;
        if(case_valide(i,colonne) && T[i][colonne]==coup)
       {    i=ligne+1;
            while(T[i][colonne]==inverse_coup(coup))
            {
                T[i][colonne]=coup;
                i++;
            } }
    }
    if(valide_horizontale_droite(T,ligne,colonne,coup)) {
        j=colonne+1;
        while(case_valide(ligne,j) && T[ligne][j]==inverse_coup(coup))
            j++;
        if(case_valide(i,j) && T[ligne][j]==coup)
        {   j=colonne+1;
            while(T[ligne][j]==inverse_coup(coup))
            {
                T[ligne][j]=coup;
                j++;
            }  }
    }
    if(valide_horizontale_gauche(T,ligne,colonne,coup)) {
        j=colonne-1;
        while(case_valide(ligne,j) && T[ligne][j]==inverse_coup(coup))
            j--;
        if(case_valide(ligne,j) && T[ligne][j]==coup)
        {   j=colonne-1;
            while(T[ligne][j]==inverse_coup(coup))
            {
                T[ligne][j]=coup;
                j--;
            }  }
    }

    if(valide_diagonale_bas_droit(T,ligne,colonne,coup)) {
        i=ligne+1;
        j=colonne+1;
        while(case_valide(i,j) && T[i][j]==inverse_coup(coup))
        {   i++;
            j++;
        }
        if(case_valide(i,j) && T[i][j]==coup)
        {   i=ligne+1;
            j=colonne+1;
            while(T[i][j]==inverse_coup(coup))
            {
                T[i][j]=coup;
                i++;
                j++;
            }  }
    }
    if(valide_diagonale_bas_gauche(T,ligne,colonne,coup)) {
        i=ligne+1;
        j=colonne-1;
        while(case_valide(i,j) && T[i][j]==inverse_coup(coup))
        {   i++;
            j--;
        }
        if(case_valide(i,j) && T[i][j]==coup)
        {   i=ligne+1;
            j=colonne-1;
            while(T[i][j]==inverse_coup(coup))
            {
                T[i][j]=coup;
                i++;
                j--;
            }  }
    }
    if(valide_diagonale_haut_droit(T,ligne,colonne,coup)) {
        i=ligne-1;
        j=colonne+1;
        while(case_valide(i,j) && T[i][j]==inverse_coup(coup))
        {   i--;
            j++;
        }
        if(case_valide(i,j) && T[i][j]==coup)
        {   i=ligne-1;
            j=colonne+1;
            while(T[i][j]==inverse_coup(coup))
            {
                T[i][j]=coup;
                i--;
                j++;
            } }
    }
    if(valide_diagonale_haut_gauche(T,ligne,colonne,coup)) {
        i=ligne-1;
        j=colonne-1;
        while(case_valide(i,j) && T[i][j]==inverse_coup(coup))
        {   i--;
            j--;
        }
        if(case_valide(i,j) && T[i][j]==coup)
        {   i=ligne-1;
            j=colonne-1;
            while(T[i][j]==inverse_coup(coup))
            {
                T[i][j]=coup;
                i--;
                j--;
            } }
    }
}
