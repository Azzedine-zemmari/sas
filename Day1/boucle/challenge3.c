#include <stdio.h>

int main(){
    int n , i , somme = 0;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i = 0 ; i<=n ; i++){
        somme += i;
    }
    printf("la somme et %d ",somme);
    return 0;
}