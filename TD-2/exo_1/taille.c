#include "f.h"

int tail(node* head){
    int c=0;
    while( head!= NULL){
            c++;
           head= head->link;
    }
    return c ;
}