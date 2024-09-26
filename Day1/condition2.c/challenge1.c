#include <stdio.h>

int main(){
    int RA , Sc , Dp;
    printf("Revenu annuel (en euros) ");
    scanf("%d",&RA);
    printf("Score de crédit (sur 1000) ");
    scanf("%d",&Sc);
    printf("Durée du prêt (en années) ");
    scanf("%d",&Dp);

    if(RA >= 30000 && Sc >= 700 && Dp <= 10){
        printf("eligible");
    }
    else if(RA >= 30000 && Sc >= 650 && Dp <= 15){
        printf("eligible avec condition ");
    }
    else if(RA < 30000 || Sc < 650 || Dp > 15){
        printf("Non eligible");
    }
    else{
        printf("veuillez enter les donner ");
    }
    return 0;
}