#include <stdio.h>
void addition(){
int n , i ,somme = 0 , num;
printf("entrer le nombre des valeurs voulez vous : ");
scanf("%d",&n);
for(i=0; i<n;i++){
printf("entrer un nombre ");
scanf("%d",&num);
somme += num ;
}
printf("%d\n",somme);
}
int main(){
    int a , b , operation , somme , abstraction , multiplication,divison;
    do{
        printf("choix 1 : ajouter\n");
        printf("choix 2 : Soustraction\n");
        printf("choix 3 : Multiplication\n");
        printf("choix 4 : Division\n");
        printf("choix 5 : Moyenne\n");
        printf("choix 6 : Valeur absolue\n");
        printf("choix 7 : Exponentiation\n");
        printf("choix 8 : Racine carrée\n");
        printf("choix 9 : quitter\n");
        scanf("%d",&operation);

        switch(operation){
            case 1 :
            addition();
            case 2 : 
            printf("entrer nombre ");
            scanf("%d",&a);
            printf("entre nombre ");
            scanf("%d",&b);
            abstraction = a-b;
            printf("%d",abstraction);
            break;
            case 3 : 
            multiplication = a * b ;
            printf("%d",multiplication);
            break;
            case 4 : 
            if(b == 0){
                printf("erreur ");
                return 1;
            }
            divison = a / b ; 
            printf("%d",divison);
            break;
            default:
            printf("veuillez saisir un nombre dans les choix donne on top ");
            break;
        }
    } while (operation != 9);
    return 0;
    
}