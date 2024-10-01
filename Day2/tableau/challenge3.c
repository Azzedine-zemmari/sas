#include <stdio.h>

int main(){
    int t[100],taille , somme ;
    printf("entrer la taille du tableau ");
    scanf("%d",&taille);

    for(int i=0;i<taille;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
        somme +=t[i];
    }
    printf("la somme du tableau et %d",somme);
    return 0;

}