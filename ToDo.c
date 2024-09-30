#include <stdio.h>
#include <string.h>

typedef struct {
    int jour;
    int mois ;
    int annee;
} date;

typedef struct 
{
    int identifient;
    char titre[50];
    char description[100];
    date deadline;
}ToDo;
int count = 0;
ToDo tache[100];
int ajouter(){
    char Rep;
    do{
    int new_identifiant;
    printf("entrer un identifient ");
    scanf("%d",&new_identifiant);
    for(int i = 0;i<count;i++){
        if(tache[i].identifient == new_identifiant){
            printf("identifient already exist \n");
            return 1;
        }
    }
    tache[count].identifient = new_identifiant;
    printf("entrer un titre ");
    scanf("%s",&tache[count].titre);
    printf("entrer un description ");
    scanf("%s",&tache[count].description);
    printf("entrer un deadline (jj/mm/yyyy) ");
    scanf("%d/%d/%d",&tache[count].deadline.jour,&tache[count].deadline.mois,&tache[count].deadline.annee);
    ++count;
    printf("voulez vous enterer un nouveau to do : (y/n)");
    scanf(" %c",&Rep);
    printf("to do add successfuly \n");
    }while(Rep == 'y' && count < 100);
}
void afficherTous(){
    for(int i=0;i<count;i++){
        printf("id : %d / titre : %s / description : %s / deadline : (%d/%d/%d)\n", tache[i].identifient,tache[i].titre,tache[i].description,tache[i].deadline.jour,tache[i].deadline.mois,tache[i].deadline.annee);
    }
}

void modifierTitre(){
    int id;
    printf("entrer l identifient de votre todo ");
    scanf("%d",&id);
    for(int i = 0;i<count;i++){
        if(tache[i].identifient == id){
            printf("entrer neauveau titre pour todo : ");
            scanf("%s",tache[i].titre);
        }
        else {
            printf("this id not found ");
        }
    }
}

void modifierDesc(){
    int id;
    printf("entrer l identifient de votre todo ");
    scanf("%d",&id);
    for(int i = 0;i<count;i++){
        if(tache[i].identifient == id){
            printf("entrer neauveau description pour todo : ");
            scanf("%s",tache[i].description);
        }
        else {
            printf("this id not found ");
        }
    }
}

void modifierDeadline(){
    int id;
    printf("entrer l identifient de votre todo ");
    scanf("%d",&id);
    for(int i = 0;i<count;i++){
        if(tache[i].identifient == id){
            printf("entrer le neauveau deadline (jj/mm/yyyy) ");
            scanf("%d/%d/%d",tache[i].deadline.jour,tache[i].deadline.mois,tache[i].deadline.annee);
        }
        else {
            printf("this id not found ");
        }
    }
}

void modification(){
    int choix;
    do{
        printf("----modification-----\n");
        printf("1.modifier le titre \n");
        printf("2.modifier description \n");
        printf("3.modifier deadline \n");
        printf("entrer un choix : ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            modifierTitre();      
            break;
        case 2 : 
            modifierDesc();
            break;
        case 3 : 
            modifierDeadline();
            break;
        case 4 : 
            printf("au revoir \n");
            break;
        default:
            break;
        }
    }while(choix !=4);
}

int main(){
    int choix ;
    do{
        printf("_______TODO________\n");
        printf("1.ajouter\n");
        printf("2.afficher\n");
        printf("3.modification\n");
        printf("4.supprimer\n");
        printf("5.statistique\n");
        printf("entrer un choix ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2 : 
            afficherTous();
            break;
        case 3:
            modification();
            break;
        case 4:
            printf("Au revoir :)");
            break;
        default:
            printf("Choix invalide, essayez encore.\n");
            break;
        }
    }while(choix !=4);
    printf("count == %d",count);
    return 0;
}