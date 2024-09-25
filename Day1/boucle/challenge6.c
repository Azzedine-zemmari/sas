#include <stdio.h>

int main () {
    int i = 0 , s = 0 , n;
    printf("entrer un nombre ");
    scanf("%d",&n);
    while(s != n){ 
        if(i%2 == 0){ 
            printf("%d \n",i);
            s++;
        }
        i++;
    }
    return 0;
}