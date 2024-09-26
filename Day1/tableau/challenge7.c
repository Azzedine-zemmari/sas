#include <stdio.h>
int main(){
    int taille , tmp , t[100] ;
    printf("entrer la taille de tableau ");
    scanf("%d",&taille);

    for(int i = 0; i<taille ; i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    tmp=0;
    for(int i = 0;i<taille;i++){
        for(int j = i+1;j<taille;j++){

        if(t[i] < t[j]){
            tmp = t[i];
            t[i] = t[j];
            t[j] = tmp;
        }
        }
    }
    for(int i = 0;i<taille;i++){
        printf("%d \n",t[i]);
    }
}