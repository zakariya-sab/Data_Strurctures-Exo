 #include"head.h"
 node* sup_ele_au_debut(node*head){
    if(head==NULL) {}
    else {
        node*pt=head;
        node*tp =head->link;
        while(pt->link!=head){
            pt=pt->link;
        } 
        free(head);
        head=tp;
        pt->link=head;
    } 
    return head; 
}