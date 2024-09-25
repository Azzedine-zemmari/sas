#include <stdio.h>

int main(){
    int n1,n2,n3,coef1 = 2,coef2 = 3 ,coef3 = 5 , moy = 0;
    printf("entrer note 1 ");
    scanf("%d",&n1);
    printf("entrer note 2 ");
    scanf("%d",&n2);
    printf("entrer note 3 ");
    scanf("%d",&n3);

    moy = ((n1*coef1) + (n2*coef2) + (n3*coef3)) / (coef1 + coef2 + coef3);
    printf("la moyenne et %d",moy);
    return 0 ;
}
