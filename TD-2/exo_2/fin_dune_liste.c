#include "head.h"
node *fin_dune_list(node*head,int n ){
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
        pt->link=new;
        new->link=head;
        return head ;
    }
}