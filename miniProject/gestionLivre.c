#include <stdio.h>
typedef struct
{
    char titre[100];
    char auteur[100];
    float prix;
    int quantity;
} livres;

livres livre[100];
int count = 0;

void ajouter()
{
    printf("entrer le titre de livre");
    scanf("%s", livre[count].titre);
    printf("entrer l auteur de livre ");
    scanf("%s", livre[count].auteur);
    printf("entrer le prix de livre ");
    scanf("%f", livre[count].prix);
    printf("entrer le quantity de livre ");
    scanf("%d", livre[count].quantity);
    count++;
    printf("le livre et ajouter successfully");
}
int main()
{
    ajouter();
    return 0;
}