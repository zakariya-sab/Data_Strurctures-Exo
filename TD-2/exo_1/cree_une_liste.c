#include "f.h"
/*gggggg*/
node* cree(void ){
    int n ;
    printf("donner le nbr des node evite le 0 :");
    scanf("%d",&n);
    int cp=n-1;
    node *head =NULL;
    if(n==0) return head ;
    printf("donner la valeur de node :");
    scanf("%d",&n);
     head = Insertion_au_debut(head ,n );
    while(cp!=0){
        cp--;
        printf("donner la valeur de node :");
        scanf("%d",&n);
        Insertion_fin(head , n);
    }
    return head;
}
