#include <stdio.h>
void max(int A, int B){
    int max = A;
    if(max > B){
        max = A;
        printf("max is %d ",A);
    }
    else{
        printf("maximum is %d ",B);
    }
}
int main(){
    int A , B;
    printf("enter un nomber : ");
    scanf("%d",&A);
    printf("enter un nomber : ");
    scanf("%d",&B);
    max(A,B);
    return 0;
}