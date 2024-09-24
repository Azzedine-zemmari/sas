#include <stdio.h>
#include <math.h>

int main(){
    double volume = 0 ;
    int r;
    const int pi = 3.14;
    printf("entrer la valeur de r ");
    scanf("%d",&r);
    volume = (4/3) * pi * pow(r,3);
    printf("la volume et %.2f",volume);
    return 0 ;
}