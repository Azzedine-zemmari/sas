#include <stdio.h>

void produit(int N,int A){
    printf("le produit de %d * %d = %d ",N,A,N*A);
}

int main(){
    int A , N;
    printf("enter la valeur de A : ");
    scanf("%d",&A);
    printf("enter la valeur de B : ");
    scanf("%d",&N);
    produit(A,N);
    return 0;
}