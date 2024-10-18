#include"head.h"
node* cree(void){
    node*head=NULL;
    printf("donner le nombre des nodes ");
    int n,cp;
    scanf("%d",&n);
    if(n==0){}
    else {
        cp=n-1;
        printf("donner le contunie de la node  ");
        scanf("%d",&n);
        head=debut_dune_list(head, n );
        while(cp!=0){
            cp--;
         printf("donner le contunie de la node  ");
        scanf("%d",&n);
        head=fin_dune_list(head, n );
        }
    }
    return head ;
}