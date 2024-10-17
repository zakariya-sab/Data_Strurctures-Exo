#include "f.h"
node* Insertion_apres_elm(node *head ,int n,int ch){

    if(head==NULL ) return head;
    node* pt = head ;
    node* pt2= head ;
    while(pt != NULL && pt->nbr != ch ){
      
      pt=pt->link;
      pt2=pt->link;
    }
    if(pt!=NULL){
       node* pt3 =malloc(sizeof(node));
       pt3->nbr=n;
       pt->link=pt3;
       pt3->link=pt2;
    }
return head ;
}