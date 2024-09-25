#include <stdio.h>

int main (int argc, char *argv[]) {
    int c ;
    printf("entre la temperature de l eau ");
    scanf("%d",&c);
    if(c<0){
        printf("la etat de l eau est glase");
    }
    else if(c>0 && c<100){
        printf("l etat de l eau et liquide ");
    }
    else{
        printf("l etat de l eau et gaz");
    }
    return 0;
}