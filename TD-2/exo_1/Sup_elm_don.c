#include "f.h"
node* sup_elm(node* head ,int cp){
if(head==NULL) { }
else{
    node* tp1=head;
    node* tp2=head;

    while (tp1!=NULL && tp1->nbr!=cp)
    {
       tp2=tp1;
       tp1=tp1->link;
    }
    if(tp1!=NULL){
    tp2->link=tp1->link;
    free(tp1);
    }
}
return head ;
}
    