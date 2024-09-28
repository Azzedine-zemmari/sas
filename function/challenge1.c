#include <stdio.h>
int somme(int a , int b ){
    printf("somme de %d + %d et %d ",a,b,a+b);
}
int main(){
    int a , b;
    printf("entrer la valeur a : ");
    scanf("%d",&a);
    printf("entrer la valeur b : ");
    scanf("%d",&b);

    somme(a,b);
    return 0 ;
}