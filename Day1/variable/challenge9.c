#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y1,y2,z1,z2,distance;
    printf("entrer la point x1 ");
    scanf("%d",&x1);
    printf("entrer la point x2 ");
    scanf("%d",&x2);
    printf("entrer la point y1 ");
    scanf("%d",&y1);
    printf("entrer la point y2 ");
    scanf("%d",&y2);
    printf("entrer la point z1 ");
    scanf("%d",&z1);
    printf("entrer la point z2 ");
    scanf("%d",&z2);

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2) +pow(z2-z1,2) );
    printf("la result de distance 3d distance %d ",distance);
    return 0 ;
}