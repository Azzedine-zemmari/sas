#include <stdio.h>

int main(){
    int i , factoriel = 1 , n ;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factoriel *= i ;
    }
    printf("le factorial de %d et %d ",n,factoriel);
    return 0;
}