#include <stdio.h>

int main(){
    int n;
    printf("entrer un nombre ");
    scanf("%d",&n);

    if(n == 0){
        printf("neutre \n");
    }
    
    if(n%2==0){
        printf("numero %d et pair ", n);
    }
    else{
        printf("numero %d et impair ",n);
    }
    return 0;
}