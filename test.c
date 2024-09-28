#include <stdio.h>

int main() {
    int i , j;
    printf("entrer nombre de ligne ");
    scanf("%d",&i);
    printf("entrer nombre de colone ");
    scanf("%d",&j);

    int T[i][j];

    for(int b1 = 0;b1<i;b1++){
        for(int b2=0;b2<j;b2++){
            
           if(b1 == b2){
                printf("%d\n",1);
           }


            
            
        }
    }

     

    return 0;
}