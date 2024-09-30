#include <stdio.h>
#include <string.h>

int main()
{
    char titre[100][40];
    char auteur[100][40];
    float prix[100];
    int quantity[100];

    int count = 0;
    char choice; // hada dyl ajout

    int choix; // hada dyl main

    do
    {
        printf("\nChoix du menu :\n");
        printf( "1 : ajouter\n");
        printf( "2 : afficher tous\n");
        printf( "3 : modifier quantity de livre\n");
        printf( "4 : recherche de livre\n");
        printf( "5 : afficher nombre total des livre\n");
        printf( "6 : supprimer un livre\n");
        printf( "7 : Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            do
            {
                printf("enter le titre :  ");
                scanf("%s", titre[count]);
                printf("enter l auteur : ");
                scanf("%s", auteur[count]);
                printf("entre le prix ");
                scanf("%f", &prix[count]);
                printf("enter la qantity : ");
                scanf("%d", &quantity[count]);
                printf("titre %s par success \n", titre[count]);

                count++;

                printf("Voulez-vous entrer un autre livre? (y/n): ");
                scanf(" %c", &choice);
            } while (choice == 'y' && count < 100);
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                printf("titre %s / auteur %s / price %.2f / quantity %d \n", titre[i], auteur[i], prix[i], quantity[i]);
            }
            break;
        case 3:
            char r[20];
            printf("enter la valeur que tu recherche ");
            scanf("%s", r);
            int found = 0;
            for (int i = 0; i < count; i++)
            {
                if (strcmp(titre[i], r) == 0)
                {
                    found = 1;
                    printf("entrer la nouvelle quantité : ");
                    scanf("%d", &quantity[i]);
                    printf("--- la quantité est modifiée avec succès ---\n");
                }
            }
            if (!found)
            {
                printf("livre non trouvé \n");
            }
            break;
        case 4:
            char rech[20];
            printf("enter la valeur que tu recherche ");
            scanf("%s", rech);
            int foundet = 0;
            for (int i = 0; i < count; i++)
            {
                if (strcmp(titre[i], rech) == 0)
                {
                    foundet = 1;
                    printf("titre %s / auteur %s / price %.2f / quantity %d \n", titre[i], auteur[i], prix[i], quantity[i]);
                }
            }
            break;
        case 5:
            printf("le nombre total des livre et %d\n", count);
            break;
        case 6:
            char rechS[20];
            printf("enter la valeur que tu recherche ");
            scanf("%s", rechS);
            int foundetS = 0;
            for (int i = 0; i < count; i++)
            {
                if (strcmp(titre[i], rechS) == 0)
                {
                    foundetS = 1;
                    for (int j = i; j < count - 1;j++)
                    {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        quantity[j] = quantity[j + 1];
                        prix[j] = prix[j + 1];
                    }
                    count--;
                }
            }
            break;
        case 7:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide, essayez encore.\n");
            break;
        }
    } while (choix != 7);
    return 0;
}