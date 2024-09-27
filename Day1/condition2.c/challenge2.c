#include <stdio.h>

int main(){
    int age , typeV , Na;
    float prime , primeFinal;
    printf("entrer age ");
    scanf("%d",&age);
    printf("entrer type voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) :  ");
    scanf("%d",&typeV);
    printf("nombre d accidenent");
    scanf("%d",&Na);

    printf("prime = ");
    scanf("%f",&prime);


    if(age < 25){
        primeFinal = prime * 1.5; 
    }
    else if(age > 25 && age < 65){
        primeFinal = prime * 1.2;
    }
    else{
        primeFinal = prime * 1.2;
    }

    if(typeV == 1){
        primeFinal = primeFinal * 2;
    }
    else if(typeV == 2){
        primeFinal *= 1.2;
    }
    else if(typeV == 3){
        primeFinal *= 1.1;
    }
    else{
        printf("this is type of voiture not availible");
    }

    if(Na > 1){
        primeFinal += 1;
    }
    printf("alors la prime final et %.2f ", primeFinal);
    return 0;
}