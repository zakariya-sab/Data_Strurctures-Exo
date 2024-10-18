#include"head.h"
void affiche(node*head){
    if(head==NULL){}
    else{
        while(head->link!=head){
            printf("le nbr = %d\n",head->nbr);
            head=head->link;
        }
    }
}