#include <stdlib.h>
#include <stdio.h>

#define D 8
#define EMPTY ' '
#define Noir 'N'
#define Blanc 'B'


/* definition d'un type de tableau */
typedef char Table[D][D];

/*definition d'un type couleur (blanc ou noir)*/
typedef char couleur
{
     char ordinateur,
     char joueur
}couleur;
/* definition d'un boolean */
typedef enum
{
    false,
    true
}Bool;


/* Definition d'une fiche du joueur */
typedef struct _Joueur
{
    char nom[30];
    int score;
}Joueur, * Ptr_Joueur;


void Joueur_ordinateur(void)
void entrer_nom_joueur(void)
void enregistrer_nom_joueur(void)
void menu0()
void(Qui_commence())
void init_table(Table T)
void aff_table(Table  T)
char inverse_coup(char coup)
Bool case_valide(int ligne,int colonne)
Bool valide_verticale_haut(Table T,int ligne,int colonne,char coup)
Bool valide_verticale_bas(Table T,int ligne,int colonne,char coup)
Bool valide_horizontale_droite(Table T,int ligne,int colonne,char coup)
Bool valide_horizontale_gauche(Table T,int ligne,int colonne,char coup)
Bool valide_diagonale_haut_droit(Table T,int ligne,int colonne,char coup)
Bool valide_diagonale_haut_gauche(Table T,int ligne,int colonne,char coup)
Bool valide_diagonale_bas_droit(Table T,int ligne,int colonne,char coup)
Bool valide_diagonale_bas_gauche(Table T,int ligne,int colonne,char coup)
Bool coup_valide(Table T,int ligne,int colonne,char coup)
Bool rejouer_ou_non(Table T,char coup)
int entrer_son_coup(Table T, char coup)
Bool partie_terminee(Table T)
void sauvegarde_result(void)
