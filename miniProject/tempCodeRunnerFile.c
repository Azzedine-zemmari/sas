
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