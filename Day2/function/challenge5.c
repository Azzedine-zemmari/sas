#include <stdio.h>

void factorial(int N){
    int factorial = 1;
    for(int i = 1;i<=N;i++)
        factorial *=i;
    printf("le factorial et %d ",factorial);
}

int main(){
    int n;
    printf("enter un nomber ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}