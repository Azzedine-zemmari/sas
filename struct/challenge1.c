#include <stdio.h>
#include <string.h>
typedef struct {
    char nom[50];
    char prenom[50];
    int age ;
}person;

int main(){
    person p1;
    strcpy(p1.nom,"George");
    strcpy(p1.prenom,"azzedine");
    p1.age = 20;
    printf("%s\n",p1.nom);
    printf("%s\n",p1.prenom);
    printf("%d\n",p1.age);
    return 0;
}