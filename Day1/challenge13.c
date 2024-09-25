#include <stdio.h>

int main(){
    int i , n , S[32] , res = 0;
    int a = 89778116;
    printf("entrer un nombre ");
    scanf("%d",&n);

    for(i=0;n>0;i++){
        S[i] = n % 2;
        n = n / 2;
    }
    printf("the binary : ");
    for(i=i-1;i>=0;i--){
        printf("%d",S[i]);
    }
    printf("\n");
    printf("the hexadecimal number %x ",a);
    return 0;
}