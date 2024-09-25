#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition()
{
    int n, i, somme = 0, num;
    printf("Entrez le nombre de valeurs que vous voulez additionner : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &num);
        somme += num;
    }

    printf("La somme des valeurs est : %d\n", somme);
}

void soustraction()
{
    int a, b, result;

    printf("Entrez un nombre : ");
    scanf("%d", &a);

    printf("entrer un nombre : ");
    scanf("%d", &b);

    result = a - b;

    printf("Le resultat de la soustraction est : %d\n", result);
}
void multiplication()
{

    int a, b, result;

    printf("Entrez un nombre : ");
    scanf("%d", &a);

    printf("entrer un nombre : ");
    scanf("%d", &b);

    result = a * b;

    printf("Le resultat de la multiplication est : %d\n", result);
}
int division()
{
    int a, b, result;

    printf("Entrez un nombre : ");
    scanf("%d", &a);

    printf("entrer un nombre : ");
    scanf("%d", &b);

    if (b != 0)
    {
        result = a / b;
    }
    else
    {
        printf("error :(");
        return 1;
    }

    printf("Le resultat de la division est : %d\n", result);
}
void moyenne(){
    int n, i, somme = 0, num , moy;
    printf("Entrez le nombre de valeurs que vous voulez additionner : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &num);
        somme += num;
    }
    
    moy = somme / n;

    printf("La moyenne des valeurs est : %d\n", moy);
}
void absolute(){
    int value , absolu;
    printf("entrer un nombre : ");
    scanf("%d",&value);
    absolu = abs(value);
    printf("la result de la valeur absolu et : %d ", absolu);
}
void exponentation(){
    int base , expon , result ;
    printf("entrer la base ");
    scanf("%d",&base);
    printf("entrer l exposent ");
    scanf("%d",&expon);

    result = pow(base,expon);
    printf("la result de l exponentation et %d",result);

}

void racine(){
    int n , result ;
    printf("entrer un nombre ");
    scanf("%d",&n);
    result = sqrt(n);
    printf("la result de racine et %d",result);
}
int main()
{
    int choix;

    do
    {
        printf("\nChoix du menu :\n");
        printf("1 : Addition\n");
        printf("2 : Soustraction\n");
        printf("3 : Multiplication\n");
        printf("4 : Division\n");
        printf("5 : moyenne\n");
        printf("6 : absolu\n");
        printf("7 : exponentation\n");
        printf("8 : racine\n");
        printf("9 : Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            addition();
            break;
        case 2:
            soustraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            moyenne();
            break;
        case 6:
            absolute();
            break;
        case 7:
            exponentation();
            break;
        case 8:
            racine();
            break;
        case 9:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide, essayez encore.\n");
            break;
        }
    } while (choix != 9);

    return 0;
}
