#include <stdio.h>
int main()
{
    int j, mois, annee;
    printf("entre la date en format (jj-mm-yyyy) : ");
    scanf("%d-%d-%d", &j, &mois, &annee);
    printf("%d", j);
    printf("-");
    switch (mois)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("mars");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("june");
        break;
    case 7:
        printf("juin");
        break;
    case 8:
        printf("aout");
        break;
    case 9:
        printf("spetember");
        break;
    case 10:
        printf("october");
        break;
    case 11:
        printf("decemeber");
        break;
    case 12:
        printf("decemeber");
        break;
    default:
        printf("this is not a month");
        break;
    }
    printf("-");
    printf("%d", annee);
    return 0;
}