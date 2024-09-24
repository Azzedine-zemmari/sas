#include <stdio.h>

int main(){
    int km ;
    double Yard;
    printf("entrer la distance en km ");
    scanf("%d",&km);
    Yard = km * 1093.61;
    printf("la distance %d km en %.2f yards  ",km,Yard);
    return 0;

}