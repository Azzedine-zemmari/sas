#include <stdio.h>

int main (int argc, char *argv[]) {
    int kmH;
    double ms;
    printf("entrer la vitess en km");
    scanf("%d",&kmH);
    ms = kmH * 0.27778;
    printf("la vitess %d km/h en m/s et %lf ",kmH,ms);


    return 0;
}