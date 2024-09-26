#include <stdio.h>

int main () {
    int n , somme ;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        somme +=i;
    }
    printf("la somme et : %d",somme);
    return 0;
}