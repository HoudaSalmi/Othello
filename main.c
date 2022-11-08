#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(void)
{
    Table T;
    int m=-1;
    int n;
    char coup=Noir;
    while(m!=0 && m!=1)
    {
    printf("Entrer votre choix : \n");
    printf("0:[continuer la partie en cours]\n");
    printf("1:[recommencer une nouvelle partie]\n");
    scanf("%d",&m);
    }
    init_table(T);
    if(m==1)
    {
        entrer_nom_joueur();
        enregistrer_nom_joueur();
    }
    else
    {
        charger_partie_encours(T);
    }
    aff_table(T);
    while(!partie_terminee(T))
    {
        n=entrer_son_coup(T,coup);
        aff_table(T);
        Joueur_ordinateur();
        if(rejouer_ou_non(T,inverse_coup(coup)))
            coup=inverse_coup(coup);
        Joueur_humain();
        else
            printf("Le joueur : %s [%c] passe son tour ! \n",nom_a_afficher(inverse_coup(coup))->nom,inverse_coup(coup));
    }
    sauvegarde_result();
    return 0;
}
