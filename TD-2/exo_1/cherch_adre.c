#include "f.h"
node*cherch_adre(node* head,int ch){
    
    while(head->nbr !=ch  && head!= NULL){
            
           head= head->link;
    }
    return head ;
}