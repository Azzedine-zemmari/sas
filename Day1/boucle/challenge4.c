#include <stdio.h>

int main () {
    int i = 0 , s = 0 , n;
    printf("entrer un nombre ");
    scanf("%d",&n);
    while(s != n){ // counter ch7al fih mn dak l n li bghi 
        if(i%2 == 1){ // checker lina impair
            printf("%d \n",i);
            s++;
        }
        i++;
    }
    return 0;
}