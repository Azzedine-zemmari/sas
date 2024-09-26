#include <stdio.h>

int main () {
    int t[100],taille , facteur , i ;
    printf("entrer la taille du tableau :  ");
    scanf("%d",&taille);
    printf("entrer la facteur :  ");
    scanf("%d",&facteur);
    for(int i=0;i<taille;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
        
    }
    for(int i = 0;i<taille;i++){
        printf("%d * %d = %d \n",t[i],facteur,t[i]*facteur);
    }
    return 0;
}