#include <stdio.h>
#include <string.h>
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
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
        printf(BLUE "1 : ajouter\n");
        printf(BLUE "2 : afficher tous\n");
        printf(BLUE "3 : modifier quantity de livre\n");
        printf(BLUE "4 : recherche de livre\n");
        printf(BLUE "5 : afficher nombre total des livre\n");
        printf(BLUE "6 : supprimer un livre\n");
        printf(BLUE "7 : Quitter\n" RESET);
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
                printf(GREEN "titre %s par success \n"RESET, titre[count]);

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
                    printf(GREEN"--- la quantité est modifiée avec succès ---\n"RESET);
                }
            }
            if (!found)
            {
                printf(RED"livre non trouvé \n"RESET);
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
            printf(GREEN"le nombre total des livre et %d\n"RESET, count);
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
            printf(BLUE"Au revoir !\n"RESET);
            break;
        default:
            printf(RED"Choix invalide, essayez encore.\n"RESET);
            break;
        }
    } while (choix != 7);
    return 0;
}