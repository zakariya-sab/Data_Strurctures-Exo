#include "f.h"
/*
Réponse à la question numero 12: "Une fonction qui affiche une liste" .

node * : variable de type struct qui contien un varible nbr de type int et autre variable de type pointeur sur node .

 head : l'adresse de l'1er element dans le list .
*/
void affichage(node* head){
    while( head!= NULL){
            printf("\n%d",head->nbr);
            head=head->link;
    }
}
