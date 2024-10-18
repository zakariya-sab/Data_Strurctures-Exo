#ifndef  HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
typedef struct node{
    int nbr ;
    struct node * link ;
}node;
node* sup_ele_au_fin(node*);
node* sup_ele_au_debut(node*);
node* fin_dune_list(node*,int);
void detruit(node*);
node*  debut_dune_list(node*,int);
node* cree(void);
void affiche(node*);
#endif