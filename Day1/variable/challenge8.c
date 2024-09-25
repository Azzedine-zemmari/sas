#include <stdio.h>
#include <math.h>
int main(){
    int a , b , c , res;
    printf("entrer un nombre ");
    scanf("%d",&a);
    printf("entrer un nombre ");
    scanf("%d",&b);
    printf("entrer un nombre ");
    scanf("%d",&c);
    res = pow((a*b*c),1.0/3.0);
    printf("la result et %d ",res);
    
    return 0 ;
}