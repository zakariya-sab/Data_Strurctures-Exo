#include "f.h"
node* Insertion_au_debut(node *head , int n ){
    node *tp=malloc(sizeof(node));
        tp->link=head;
        tp->nbr=n;
    
    return tp ;
}