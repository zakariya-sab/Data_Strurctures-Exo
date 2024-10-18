#include "head.h"
node *debut_dune_list(node*head,int n ){
    if(head == NULL){
        node* new =malloc(sizeof(node));
        new->link=new;
        new->nbr=n;
        head = new ; 
        return head;
    }
    else {
        node* new =malloc(sizeof(node));
        new->nbr=n;
        node*pt=head;
        while(pt->link!=head){
            pt=pt->link;
        }   
        new->link=head;
        pt->link=new;
        return new ;
    }
}