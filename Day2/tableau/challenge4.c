#include <stdio.h>

int main(){
    int t[100], taille , max ;
    printf("entrer la taille du tableau ");
    scanf("%d",&taille);


    for(int i=0;i<taille;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
       
    }
    max = t[0];

    for(int i=1;i<taille;i++){
         if(max<t[i]){
            max = t[i];
        }   
    }

    printf("le maximum value et : %d ", max);
    return 0;

}