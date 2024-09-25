#include <stdio.h>

int main () {
    int a , b , somme  ;
    printf('entrer un nombre ');
    scanf("%d",&a);
    printf("entrer un nomber ");
    scanf("%d",&b);
    somme = a + b;
    printf("la somme et : %d ", somme);
    if(a == b){
        somme *=3;
    }
    printf("la somme et : %d ", somme);
    return 0;
}