#include <stdio.h>

int main(){
    int n , com , remainder ;

    printf("entrer un nomber n ");
    scanf("%d",&n);

    do{
        ++com;
        n/=10;
    }while(n);

    printf("le valeur contain %d ",com);
    return 0;
}