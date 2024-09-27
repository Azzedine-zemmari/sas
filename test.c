#include <stdio.h>

int main() {
    int taille;
    printf("entrer la taille du tableau ");
    scanf("%d",&taille);
    int tableau[taille];
    for(int i = 0; i < taille; i++) {
        printf("veuillez entrer un nombre : ");
        scanf("%d",&tableau[i]);
    }

    for(int i = 0; i < taille; i++){
        printf("%d \n",tableau[i]);
    }

    return 0;
}