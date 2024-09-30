#include <stdio.h>
#include <string.h>

int main(){
    char chaine[30];
    char carct;
    int count;
    printf("entrer une chaine caractere ");
    gets(chaine);
    printf("entrer un charchter ");
    scanf(" %c",&carct);
    for(int i = 0;i<30;i++){
        if(chaine[i] == carct){
            count++;
        }
    }
    printf("le carctere %c dans la chaine charcter et %s et occure %d fois",carct,chaine,count);
    return 0;
}