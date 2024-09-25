#include <stdio.h>

int main () {
    int base , exposant , result=1 ;
    printf("entrer la base ");
    scanf("%d",&base);
    printf("entrer l exposant ");
    scanf("%d",&exposant);
    for(int i = 0; i<exposant ; i++ ){
        result *= base;
    }
    printf("la result de %d ^ %d = %d",base,exposant,result);
    return 0;
}