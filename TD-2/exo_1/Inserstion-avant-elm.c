#include "f.h"
node * Insertion_avant_elm(node *head ,int n ,int ch){
    if(head==NULL ) return head;
    if (head->nbr==ch) return Insertion_au_debut(head , n);
    node* pt = head ;
    node* pt2= head ;
    while(pt != NULL && pt->nbr != ch ){
      pt2=pt;
      pt=pt->link;
    }
    if(pt!=NULL){
       node* pt3 =malloc(sizeof(node));
       pt3->nbr=n;
       pt2->link=pt3;
       pt3->link=pt;
    }
return head ;
}