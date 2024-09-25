#include <stdio.h>

int main () {
    float longe , larg ; 
    double surface = 0;
    printf("entrer la longeur : ");
    scanf("%f",&longe);
    printf("entrer le largeur : ");
    scanf("%f",&larg);
    surface = longe * larg;
    printf("la surface et : %.2lf ",surface);
    return 0;
}