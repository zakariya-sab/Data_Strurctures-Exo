#include "f.h"
void Insertion_fin(node *head ,int n){
    node *tp2 = malloc(sizeof(node));
    node *tp = malloc(sizeof(node));
    
    if(head == NULL) return Insertion_au_debut(head , n) ;
    else {
    
    tp=head;
    while(tp->link!=NULL){
        tp=tp->link;
    }
    tp->link=tp2;
    tp2->nbr=n;
    tp2->link=NULL;

    }
    }