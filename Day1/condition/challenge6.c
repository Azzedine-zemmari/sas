#include <stdio.h>
int main(){
    int n;
    printf("entrer un nombre ");
    scanf("%d",&n);

    if(n>0){
        printf("positif");
    }
    else if(n == 0){
        printf("null");
    }
    else{
        printf("negative");
    }
    return 0;
}