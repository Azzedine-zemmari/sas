#include <stdio.h>

int main () {
    int annee , mois , jour , heur , minute , second;
    printf("entrer l annee ");
    scanf("%d",&annee);
    mois = annee * 12;
    jour = annee * 365;
    heur = jour * 24;
    minute = heur * 60;
    second = minute * 60;
    printf("le mois : %d ",mois);
    printf("le jour : %d ",jour);
    printf("le heur : %d ",heur);
    printf("le minute : %d ",minute);
    printf("le second : %d ",second);
    return 0;
}