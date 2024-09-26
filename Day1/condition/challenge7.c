#include <stdio.h>

int main () {
    char c;
    printf("enter un lettre ");
    scanf("%c",&c);
    if(c >= 'A' && c <= 'Z'){
        printf("le caractere %c et majuscule ",c);
    }
    else if(c >= 'a' && c <= 'z'){
        printf("le caractere %c et miniscule ",c);
    }
    else{
        printf("ca se n est pas un caractre ");
    }
    return 0;
}