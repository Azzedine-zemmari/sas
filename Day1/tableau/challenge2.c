#include <stdio.h>

int main(){
    int t[100],taille;
    printf("enter la taille du tableau ");
    scanf("%d",&taille);
    for(int i=0;i<taille;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    for(int i=0;i<taille;i++){
        printf("t[%d] = %d\n",i+1,t[i]);
    }
    return 0;
}