#include "f.h"
node* sup_deput(node* head){
if(head=NULL) {}
else{
   node* tp =head ;
   head=head->link;
   free(tp);
   tp = NULL;
}
return head ; 
}