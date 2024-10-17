#ifndef F_H
#define F_H
#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
typedef struct node{
    int nbr ;
    struct node * link ;
}node;
 int tail(node*);
 void vide(node* );
 node* sup_fin(node*  ,int );
 node* sup_elm(node*  ,int);
 node* sup_deput(node*);
 void Insertion_fin(node*,int );
 node* Insertion_au_debut(node *, int);
 node* Insertion_apres_elm(node * ,int ,int);
 node * Insertion_avant_elm(node *,int ,int);
 node* cherch_adre(node* ,int);
 node* cree(void );
 void affichage(node*);
 void affichage(node*);
#endif