#include <stdio.h>
void minimum(int A, int B){
    int min = A;
    if(min<B){
        min = A;
        printf("min is %d ",A);
    }
    else{
        printf("minum is %d ",B);
    }
}
int main(){
    int A , B;
    printf("enter un nomber : ");
    scanf("%d",&A);
    printf("enter un nomber : ");
    scanf("%d",&B);
    minimum(A,B);
    return 0;
}