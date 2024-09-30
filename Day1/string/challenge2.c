#include <stdio.h>
#include <string.h>


int main(){
    char chaine[20];
    printf("enter un chaine ");
    scanf("%s",chaine);
    int count;
    for(int i = 0;chaine[i] != '\0' ;i++){
            count++;
    }
    printf("chaine contain %d ",count);
}



