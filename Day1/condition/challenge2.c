#include <stdio.h>

int main () {
    char lettre;
    printf("entrer un caractere ");
    scanf(" %c",&lettre);

    switch (lettre)
    {
    case 'a' :
    case 'o':
    case 'i':
    case 'u':
    case 'e':
    case 'y':
    printf("ce lettre %c et voyelle ",lettre);
    break;
    default:
    printf("ce lettre %c et pas voyelle ", lettre);
    break;
    }
    return 0;
}