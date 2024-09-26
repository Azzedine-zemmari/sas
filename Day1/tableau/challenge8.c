#include <stdio.h>
int main(){
    int t[100] , b[100] , i , taille;
    printf("entrer la taille du tableau ");
    scanf("%d",&taille);
    for(i=0;i<taille;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }

    for(i=0;i<taille;i++){
        b[i]=t[i];
    }

    printf("--- le tableau original ---- \n");
    for(i=0;i<taille;i++){
       printf("t[%d]=%d\n",i+1,t[i]);
    }
     printf("--- le tableau copie ---- \n");
     for(i=0;i<taille;i++){
       printf("b[%d]=%d\n",i+1,b[i]);
    }
}