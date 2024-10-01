#include <stdio.h>
#include <string.h>

typedef struct{
    char nom[40];
    char prenom[40];
    int notes[5];
} person;


int main(){
    person p1;
    printf("entrer le nom d etudiant ");
    scanf("%s",p1.nom);
    printf("entrer le prenom d etudiant ");
    scanf("%s",p1.prenom);
    for(int i=0;i<5;i++){
        printf("note [%d]",i+1);
        scanf("%d",&p1.notes[i]);
    }
    printf("le nom d etudiant %s \n",p1.nom);
    printf("le prenom et %s \n",p1.prenom);
    for(int i=0;i<5;i++){
        printf("note [%d] = %d \n",i+1,p1.notes[i]);
    }
    return 0;
}