#include "f.h"
node* sup_fin(node* head ,int cp){
if(head==NULL) {}
else{
    node* tp=head;
    node* tp2=head;
        while(tp->link!=NULL){
            tp2=tp;
            tp=tp->link;
        }
    tp2->link=NULL;
    free(tp);
     }
 return head;
}
