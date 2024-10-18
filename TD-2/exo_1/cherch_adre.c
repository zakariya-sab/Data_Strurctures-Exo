#include "f.h"
/*
Réponse à la question numero 9: " Une fonction qui cherche l'existence d'une valeur dans une liste et retourne l'adresse de
l’élément correspondant si la valeur existe sinon retourne NULL " .

node * : variable de type struct qui contien un varible nbr de type int et autre variable de type pointeur sur node .

 head : l'adresse de l'1er element dans le list .

ch : La valeur "nbr" du nœud que nous recherchons .

*/
node*cherch_adre(node* head,int ch){

    while(head->nbr !=ch  && head!= NULL){

           head= head->link;
    }
    return head ;
}
