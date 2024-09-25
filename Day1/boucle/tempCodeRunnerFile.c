#include <stdio.h>

int main () {
    int i , n ;
    printf("entrer un valeur ");
    scanf("%d",&n);
    printf("___ les nombre impairs ___\n");
    for(i=0;i<=n;i++){
        if(i%2==1){
            printf("%d ,",i);