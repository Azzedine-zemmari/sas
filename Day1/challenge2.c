#include <stdio.h>

int main(){
    int c ;
    float K;
    printf("entrer temperature ");
    scanf("%d",&c);
    K = c + 273.15;
    printf("la temperature %d en %.2f k ",c,K);
    return 0;

}