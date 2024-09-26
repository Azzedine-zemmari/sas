#include <stdio.h>

#include <stdio.h>

int main(){
    int t[100], taille , min ;
    printf("entrer la taille du tableau ");
    scanf("%d",&taille);


    for(int i=0;i<taille;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
       
    }
    min = t[0];

    for(int i=1;i<taille;i++){
         if(min>t[i]){
            min = t[i];
        }   
    }

    printf("le minum value et : %d ", min);
    return 0;

}