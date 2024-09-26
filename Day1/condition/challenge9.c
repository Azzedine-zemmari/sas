#include <stdio.h>
#include <ctype.h>

int main(){
    char letter ;
    printf("entre le caracter ");
    scanf("%c",&letter);
    if(isalpha(letter)){
        printf("valeur %c is letter\n",letter);
    }
    else if(isdigit(letter)){
         printf("valeur is number\n");
    }
    if(letter >= 'A' && letter <= 'Z'){
        printf("le caractere %c et majuscule\n ",letter);
    }
    else if(letter >= 'a' && letter <= 'z'){
        printf("le caractere %c et miniscule \n",letter);
    }

    return 0;

}