#include <stdio.h>

int main () {
    int nombre ,  mille , cent , dix , un  , reverse ;
    printf("entrer un nombre de quatre entier ");
    scanf("%d",&nombre);
    if(nombre < 1000 || nombre > 9999){
        printf("le numbre peut contenir 4 entier");
        return 1;
    }
    mille = nombre / 1000;
    cent = (nombre / 100) % 10;
    dix = (nombre / 10) % 10;
    un = nombre % 10;

    reverse = un * 1000 + dix * 100 + cent * 10 + mille;
    printf("le nombre %d on reverse et : %d ", nombre , reverse);

    return 0;
}