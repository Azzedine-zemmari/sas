#include <stdio.h>

int main(){
    int h,m,s,h2,m2,s2;
    printf("l heur de premier instant ");
    scanf("%d",&h);
    printf("l heur deuxieme de premier instant ");
    scanf("%d",&h2);
    printf("l minute  de premier instant ");
    scanf("%d",&m);
    printf("l minute de deuxieme instant ");
    scanf("%d",&m2);
    printf("l second  de premier instant");
    scanf("%d",&s);
    printf("l second de deuxieme instant ");
    scanf("%d",&s2);

    if (h < h2  || (h == h2 && m < m2) || (h == h2 && m == m2 && s < s2)) {
        printf("Le premier instant est avant le deuxième.\n");
    } else if (h > h2 || (h == h2 && m > m2) ||  (h == h2 && m == m2 && s > s2)) {
        printf("Le premier instant est après le deuxième.\n");
    } else {
        printf("Les deux instants sont égaux.\n");
    }
    return 0;
    
}