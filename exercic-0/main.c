#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 50


typedef struct{
char *nom ;
int *numero;
}person;



int cpp=0;



person** reperatoire(){
 person **r = (person**)malloc(TMAX*sizeof(person*));
         for(int i=0;i<TMAX;i++){
              r[i]=NULL;
          }
          return r;
        }


int taille(person**t){
if(t[0]==NULL) ;
else{
        cpp=0;
    for(int i=0;i<TMAX ;i++){
        if(t[i]!=NULL)
            ++cpp;
    }
}
return cpp ;
}
void agouter(person**p,char*NOM ,int T[]){
    p[cpp]= malloc(sizeof(person));
    p[cpp]->nom=malloc(strlen(NOM)+1);
    p[cpp]->numero=malloc(10*sizeof(int));
    strcpy(p[cpp]->nom, NOM);
    memcpy(p[cpp]->numero,T,10*sizeof(int));
    cpp++;
    }


int indice_num(person**p,int t[]){
   if(p[0]==NULL) return -1 ;
   else{
        for(int i=0;i<cpp ;i++){
            if (memcmp(t,p[i]->numero,10* sizeof(int)) == 0)
                return i ;
        }
       }
   return -1;
   }


void affiche_nom(person**p,int t[]){
if(p[0]==NULL) { printf("le numero n'exciste pas \n");return ;}
else{
        int i = indice_num(p,t);
    if(i==-1)printf("le numero n'exciste pas\n ");
    else{
        printf("le nom est :%s\n",p[i]->nom);
    }
}
}


int nb_occ_numero(person**p,int t[]){
    int op=0;
    if(p[0]==NULL) return 0;
    else{
        for(int i=0;i<cpp ;i++){
             if (memcmp(t, p[i]->numero, 10 * sizeof(int)) == 0)
                op++;
        }
    }
    return op;
    }
void supprime_element(person **p,int ob){
    int i =ob-1;
         person*q=p[i];
    if(p[0]==NULL) {return ;}
    else{
        for(int j=i;j<cpp;j++){
            p[j]=p[j+1];
        }
    }
    p[cpp]=NULL;
    cpp--;
    free(q);
    q=NULL;
}


void supprime_1_apparition(person**p,int t[]){
       if(p[0]==NULL) return ;
       else{
        for(int i=0;i<cpp;i++){
            if(memcmp(p[i]->numero,t,10)==0){
               for(int j=i+1;j<cpp;j++){
                   if(memcmp(p[j]->numero,t,10)==0){
                supprime_element(p,j);
                return;
            }
            }
        }
       }
       }}


void supprime_apparitions(person**p,int t[]){
    int n = nb_occ_numero(p,t);
    if(p[0]==NULL) return ;
    while(n!=1 && n!=0 ){
        n--;
        supprime_1_apparition(p,t);
    }
    }

void supprime_doubblons(person**p){
    if(p[0]==NULL) return ;
    else{
        for(int i=0;i<cpp;i++){
            if(nb_occ_numero(p,p[i]->numero)>0){
                supprime_apparitions(p,p[i]->numero);
            }

        }
    }
    }


     int main() {

    person **rep = reperatoire();


    int num1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int num2[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int num4[10] = {0, 9, 8, 7, 6, 8, 4, 3, 2, 1};

    printf(".......Ajout  personnes.......\n");
    agouter(rep, "Alice", num1);
    agouter(rep, "ziko", num4);
    agouter(rep, "Bob", num2);
    agouter(rep, "Bob", num2);
    agouter(rep, "Bob", num2);
    agouter(rep, "Bob", num2);
    agouter(rep, "Bob", num2);

    printf("Le nombre de personnes dans le répertoire est : %d\n", taille(rep));


    printf("\nRecherche de Alice  et bob par son numéro...\n");
    affiche_nom(rep, num1);
    affiche_nom(rep,num2);


    printf("\nNombre d'occurrences du numéro de Bob : %d\n", nb_occ_numero(rep, num2));
    printf("\nNombre d'occurrences du numéro de Alice : %d\n", nb_occ_numero(rep, num1));
    printf("\nNombre d'occurrences du numéro de x : %d\n", nb_occ_numero(rep, num4));


    printf("\nSuppression de ziko...\n");
    supprime_element(rep, 2);  // حذف الشخص الذي لديه الرقم 2 (Bob)

    // عرض عدد الأشخاص في الدليل بعد الحذف
    printf("\nLe nombre de personnes dans le répertoire après suppression est : %d\n", taille(rep));

    // محاولة عرض رقم ziko بعد الحذف
    printf("\nRecherche de ziko après suppression...\n");
    affiche_nom(rep, num4);  // محاولة عرض ziko بعد الحذف

   // إضافة تكرارات واختبار حذف التكرارات
    printf("\nAjout de personnes avec des numéros répétés...\n");
    agouter(rep, "salam", num4); // إضافة Charlie بنفس الرقم كـ ziko
    agouter(rep, "David", num4);   // إضافة David بنفس الرقم كـ ziko*/

    printf("\nLe nombre de personnes dans le répertoire avant suppression des doublons est : %d\n", taille(rep));

    // حذف التكرارات
    printf("\nSuppression des doublons...\n");
    supprime_doubblons(rep);

    // عرض عدد الأشخاص بعد حذف التكرارات
    printf("\nLe nombre de personnes dans le répertoire après suppression des doublons est : %d\n", taille(rep));


    for (int i = 0; i < cpp; i++) {
        free(rep[i]->nom);
        free(rep[i]->numero);
        free(rep[i]);
    }
    free(rep);

    return 10;
}


