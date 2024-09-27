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
        if(strcmp(livre[count].titre,titre) == 0){
            for(int j = i;j<count;i++){
                
            }
        }
    }
}
int main()
{
    ajouter();
    modifier();
    afficher();
    printf("%d", count);
    return 0;
}