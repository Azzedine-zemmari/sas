#include <stdio.h>

int main () {
    int congeA,congeU,Statut,jr;
    printf("Nombre total de jours de congés accordés");
    scanf("%d",&congeA);
    printf("Nombre de jours de congés utilisés");
    scanf("%d",&congeU);
    printf("Statut de l'employé (0 pour temps partiel, 1 pour temps plein)");
    scanf("%d",&Statut);
    if(Statut){
        jr=congeA - congeU;
        printf("jour rester et %d ",jr);
    }
    else if (!Statut)
    {
        
    }
    
    return 0;
}