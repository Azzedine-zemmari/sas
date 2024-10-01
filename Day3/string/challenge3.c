#include <stdio.h>
#include <string.h>
#define Max 50

int main(){
    char pr1[Max];
    char pr2[Max];
    printf("entrer premier chaine ");
    gets(pr1);
    printf("entrer second chaine ");
    gets(pr2);
    
    strcat(pr1,pr2);
    printf("apres la concatenation %s ",pr1);

    return 0;
}