 #include"head.h"
 node* sup_ele_au_fin(node*head){
    if(head==NULL) {}
    else {
        node*pt=head;
        node*tp =head;
        while(pt->link!=head){
           tp=pt;
            pt=pt->link;
        } 
    free(pt);
    pt=NULL;
    tp->link=head;
    } 
    return head; 
}