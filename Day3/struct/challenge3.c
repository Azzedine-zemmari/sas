#include <stdio.h>

typedef struct {
    int longeur;
    int largeur;
}rectangle;


int air(int longeur,int larg){
    int S = longeur * larg;
    return S ;
}
int main () {
    rectangle r1;
    printf("entrer la longeur de rectangle ");
    scanf("%d",&r1.longeur);
    printf("entrer la largeur de rectangle ");
    scanf("%d",&r1.largeur);
    printf("l air du rectangle et %d ",air(r1.longeur,r1.largeur));
    return 0;
}