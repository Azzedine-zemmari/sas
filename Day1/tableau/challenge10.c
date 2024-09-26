#include <stdio.h>

int main(){
    int t[100] , r , i , taille;
    printf("entrer la taille du tableau : ");
    scanf("%d",&taille);
    for(i = 0;i<taille;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    printf("entrer l element que tu recherche ");
    scanf("%d",&r);
    int found = 0;
    for(i=0;i<taille;i++){
        if(t[i] == r ){
            found = 1;
        }
    }
    if(found = 1){
        printf("l element %d is found ",r);
    }
}