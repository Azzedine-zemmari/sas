#include <stdio.h>
#include <string.h>
typedef struct 
{
    int id;
    char nom[40];
    char num[20];
    char email[100];
}contact;

contact c[100];
int iter = 0;
void ajouter(){
    printf("entrer un identfication ");
    scanf("%d",&c[iter].id);
    printf("entrer nom ");
    scanf("%s",c[iter].nom);
    printf("enter numero de tel ");
    scanf("%s",c[iter].num);
    printf("entre email ");
    scanf("%s",c[iter].email);
    iter++;
    printf("--- contact ajouter avec success ---\n");
}
void ajouterMultiple(){
    char reponse;
    do{
        ajouter();
        printf("voulez vous ajouter une autre fois (y/n) : ");
        scanf(" %c",&reponse);
    }while(reponse == 'y' && iter < 100);
}
void affichageSimple(){
    printf("----affichageSimple0----\n");
    for(int i = 0;i<iter;i++){
        printf("id : %d\n",c[i].id);
        printf("nom : %s\n",c[i].nom);
        printf("tel : %s\n",c[i].num);
        printf("email : %s\n",c[i].email);
    }
}
void modifierNom(){
    int id , found = 0;
    printf("enter l id que tu recherche ");
    scanf("%d",&id);
    for(int i = 0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("entrer neauveau nom pour l id %d ", id);
            scanf("%s",c[i].nom);
        }
    }
    if(!found){
        printf("id not found ");
    }
   
}
void modifiernumero(){
    int id , found = 0;
    printf("enter l id que tu recherche ");
    scanf("%d",&id);
    for(int i = 0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("entrer neauveau numero pour l id %d ", id);
            scanf("%s",c[i].num);
        }
    }
    if(!found){
        printf("id not found ");
    }
}
void modifieremail(){
    int id , found = 0;
    printf("enter l id que tu recherche ");
    scanf("%d",&id);
    for(int i = 0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("entrer neauveau email pour l id %d ", id);
            scanf("%s",c[i].email);
        }
    }
    if(!found){
        printf("id not found ");
    }
}
void modifierTous(){
    int id , found = 0;
    printf("enter l id que tu recherche ");
    scanf("%d",&id);
    for(int i = 0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("entrer neauveau nom pour l id %d ", id);
            scanf("%s",c[i].nom);
            printf("entrer neauveau numero pour l id %d ", id);
            scanf("%s",c[i].num);
            printf("entrer neauveau email pour l id %d ", id);
            scanf("%s",c[i].email);
            printf("---- tous les donnes sont modifier par success ---- \n");
        }
    }
    if(!found){
        printf("id not found ");
    }
}
void suppermier(){
    int id , found = 0;
    char rep;
    printf("enter l id que tu recherche ");
    scanf("%d",&id);
    for(int i = 0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("do you want to delete this contact (y/n) ");
            scanf(" %c",&rep);
            if(rep=='y'){
            for(int j = i;j<iter - 1;j++){
                c[j] = c[j+1];
            }
            iter--;
            printf("contact et supprimer avec success \n");
            }
            else{
                printf("contact non suppermier \n");
            }
                return;
        }
    }
}
void rechercheById(){
    int id , found = 0;
    printf("entrer l id ");
    scanf("%d",&id);
    for(int i=0;i<iter;i++){
        if(c[i].id == id){
            found = 1;
            printf("id : %d\n",c[i].id);
            printf("nom : %s\n",c[i].nom);
            printf("num : %s\n",c[i].num);
            printf("email : %s\n",c[i].email);
        }
    }
    if(!found){
        printf("id not found \n");
    }
}
void rechercheByName(){
    char name[40];
    printf("enter le nom que tu rechercher ");
    scanf("%s",name);
    int found = 0;
    for(int i = 0;i<iter;i++){
        if(strcmp(c[i].nom,name) == 0){
            found = 1;
            printf("id : %d\n",c[i].id);
            printf("nom : %s\n",c[i].nom);
            printf("num : %s\n",c[i].num);
            printf("email : %s\n",c[i].email);
        }
    }
    if(!found){
        printf("id not availabale \n");
    }
}
void avg(){
    int i, s = 0;
    for(i = 0;i<iter;i++){
        s += i;
    }
    int avgR = s/iter;
    printf("the avg %d\n",avgR);
}
void max(){
    char maxnom[40] = "";
    for(int i=0;i<iter;i++){
        if(strlen(c[i].nom) > strlen(maxnom)){
            strcpy(maxnom,c[i].nom);
        }
    }
    printf("the maximum is %s ",maxnom);
}
int main(){
    int choix , choixAdd , choixAfii,choixMod,choixRECH,choixStas;
    do{
        printf("----Contacts----\n");
        printf("1.ajouter contact\n");
        printf("2.afficher contact \n");
        printf("3.modifier contact \n");
        printf("4.supprimer contact \n");
        printf("5.Rechercher sur un contact \n");
        printf("6.Quiter \n");
        printf("entrer votre choix ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
        do{
        printf("1:ajouter simple \n");
        printf("2:ajoute multiple \n");
        printf("3:retour \n");
        printf("entere votre choix : ");
        scanf("%d",&choixAdd);
            switch (choixAdd)
            {
            case 1:
                ajouter();
                break;
            case 2 : 
                ajouterMultiple();
                break;
            case 3 : 
                printf("retour \n");
                break;
            default:
                printf("choix invalide \n");
                break;
            }
        }while(choixAdd != 3);
        break;
        case 2 : 
            do{
                printf("----affichage----\n");
                printf("1.affichage simple \n");
                printf("2.affichage par order asc \n");
                printf("3.affichage par order descandant \n");
                printf("entre votre choix ");
                scanf("%d",&choixAfii);
                switch (choixAfii)
                {
                case 1:
                    affichageSimple();
                    break;
                case 2:
                    printf("affichage par asc \n");
                    break;
                case 3 : 
                    printf("affichage par desc \n");
                    break;
                case 4 : 
                    printf("retour \n");
                    break;
                default:
                    printf("choix invalide \n");
                    break;
                }
            }while(choixAfii != 4);
            break;
        case 3:
        do{
            printf("---modification---\n");
            printf("1.modifier nom \n");
            printf("2.modifier tel \n");
            printf("3.modifier email \n");
            printf("4.modifier tous \n");
            printf("entrer votre choix ");
            scanf("%d",&choixMod);
            switch (choixMod)
            {
            case 1:
                modifierNom();
                break;
            case 2:
                modifiernumero();
                break;
            case 3:
                modifieremail();
                break;
            case 4:
                modifierTous();
                break;
            case 5:
                printf("retour \n");
                break;
            default:
                printf("invalid choix \n");
                break;
            }
        }while(choixMod != 5);
        break;

        case 4:
        suppermier();
        break;
        case 5 : 
        do{
            printf("---Recherche---\n");
            printf("1.rechercher avec id\n");
            printf("2.rechercher avec titre\n");
            printf("enter votre choix ");
            scanf("%d",&choixRECH);
            switch (choixRECH)
            {
            case 1:
                rechercheById();
                break;
            case 2:
                rechercheByName();
                break;
            case 3:
                printf("by");
                break;
            default:
                printf("choix invalid \n");
                break;
            }
        }while(choixRECH != 3);
        break;
        case 6:
        do{
            printf("---statique---\n");
            printf("1.avg\n");
            printf("2.max\n");
            printf("3.min\n");
            printf("printf the choix ");
            scanf("%d",&choixStas);
            switch (choixStas)
            {
            case 1:
                avg();
                break;
            case 2:
                max();
                break;
            case 3:
                printf("min");
                break;
            default:
                printf("ce choix est introvable");
                break;
            }
        }while(choixStas != 4);
        break;
        default:
            printf("ce choix est invalid");
            break;
        }
    }while(choix != 7);
}
