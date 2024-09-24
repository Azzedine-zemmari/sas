#include <stdio.h>

int main(){
    float a , b ;
    printf("entrer la valeur de a ");
    scanf("%f",&a);
    printf("entrer la valeur de b ");
    scanf("%f",&b);
    if(b == 0){
        printf("veuillez entre un valeur plus que 0");
        return 1;
    }
    printf("%.2f + %.2f = %.2f\n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);

}