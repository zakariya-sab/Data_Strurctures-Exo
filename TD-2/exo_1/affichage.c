#include "f.h"

void affichage(node* head){
    while( head!= NULL){
            printf("\n%d",head->nbr);
            head=head->link;
    }
}