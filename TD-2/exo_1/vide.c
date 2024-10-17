#include "f.h"
void vide(node* head){
    int cp=tail(head);
    node*tp=head;
    while(cp!=0){
        cp--;
        tp=head;
        head=head->link;
        free(tp);
        tp=NULL;
    }
}
