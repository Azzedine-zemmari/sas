#include <stdio.h>
#include <string.h>
#define MAX 50
int main(){
    char string1[MAX] , string2[MAX];

    printf("entrer la premier ");
    gets(string1);
    printf("entrer la deuxieme ");
    gets(string2);

    if(strcmp(string1,string2) == 0){
        printf("les chaine et egale \n");
    }
    else{
        printf("les chaine et different \n");
    }

    return 0;
}