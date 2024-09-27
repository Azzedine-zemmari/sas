#include <stdio.h>
#include <string.h>
typedef struct
{
    char titre[100];
    char auteur[100];
    int prix;
    int quantity;
} livres;

livres livre[100];
int count = 0;

void ajouter()
{
    printf("entrer le titre de livre : ");
    scanf("%s", livre[count].titre);
    printf("entrer l auteur de livre : ");
    scanf("%s", livre[count].auteur);
    printf("entrer le prix de livre : ");
    scanf("%d", &livre[count].prix);
    printf("entrer le quantity de livre : ");
    scanf("%d", &livre[count].quantity);
    count++;
    printf("le livre et ajouter successfully \n");
}
void afficher(){
    for(int i = 0;i<count;i++){
        printf("--- livre %d --- \n",count);
        printf("titre : %s , autheur : %s , price : %d , quantity : %d \n",livre[i].titre,livre[i].auteur,livre[i].prix,livre[i].quantity);
        printf("---------------\n");
    }
}
void modifier(){
    char title[50];
    printf("enter le titre de ce livre ");
    scanf("%s",title);
    int found = 0 ;
    for(int i = 0;i < count;i++){
        if(strcmp(livre[i].titre , title) == 0 ){
            found = 1;
            printf("entrer le quantity de livre : ");
            scanf("%d", &livre[i].quantity);
            printf("livre %s is modified successfuly \n", livre[i].titre);
        }
    }
    if(found != 1){
        printf("livre not found \n");
    }

}
int supprimer(){
    char titre[50];
    printf("entrer le titre de livre : ");
    scanf("%s",titre);
    for(int i = 0;i<count;i++){
        if(strcmp(livre[i].titre,titre) == 0){
            for(int j = 0 ; j < count-1 ;i++){
                livre[j] = livre[j+1];
            }
            count--;
        }
    }
}
int main()
{
    int choix;
    do{
        printf("choix 1 : ajouter un livre \n");
        printf("choix 2 : modifier la quantity de livre \n");
        printf("choix 3 : supprimer un livre \n");
        printf("choix 4 : afficher toute livre \n");
        printf("choix 5 : recherche sur un livre \n");
        printf("choix 6 : afficher le nombre des livre stocker \n");
        printf("choix 7 : quitter \n");
        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2 : 
            modifier();
            break;
        case 3 : 
            supprimer();
            break;
        case 4 : 
            afficher();
            break;
        case 5 : 
            printf("still working on this one ");
            break;
        case 6 : 
            printf("le nombre des livre et : %d",)
        default:
            break;
        }
    }while(choix != 7)
    ajouter();
    modifier();
    supprimer();
    afficher();

    printf("%d", count);
    return 0;
}