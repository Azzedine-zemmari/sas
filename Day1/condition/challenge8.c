#include <stdio.h>

int main () {
    int moy;
    printf("entrer votre moyenne ");
    scanf("%d",&moy);
    if(moy < 10){
        printf("recale");
    }
    else if(moy >= 10 && moy < 12){
        printf("passable");
    }
    else if(moy >= 12 && moy < 14){
        printf("assez bien");
    }
    else if(moy >= 14 && moy < 16){
        printf("bien");
    }
    else if(moy>=16 && moy<=20){
        printf("tres bien ");
    }
    else{
        printf("la moyenne doit etre entre 0 et 20");
    }
    return 0;
}