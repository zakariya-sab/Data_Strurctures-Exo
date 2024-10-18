 #include"head.h"
 void detruit(node*head){
    if(head==NULL) {}
    else {
        node*pt=head;
        int cp =0;
        while(pt->link!=head){
            pt=pt->link;
            cp++;
        } 
        pt->link=NULL;
        node*tp=head;
        while(cp!=0){
            cp--;
            tp=head;
            head=head->link;
            free(tp);
            tp=NULL;
    }

    }  
}