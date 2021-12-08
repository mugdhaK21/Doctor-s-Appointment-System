#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include "projectinfo.h"

int main()
{
    system("color 1F");
    int d;
    head = NULL;
    char query, query2;
    while (1)
    {
        printf(" *********Main Menu*********\n");
    main_again:
        printf("1.I'm a Patient\n2.I'm the Doctor\n\n\n");
        scanf(" %c", &query);
        if (query == '1')
        {
            while (1)
            {
                system("cls");
                printf("                      *********Patient's Menu*********\n");
                printf("1.Place Appointment\n2.Back to main menu.\n3.Place an emergency appoint.\n");
                char appoint1;
            patient_again:
                scanf(" %c", &appoint1);
                if (appoint1 == '1')
                {
                    system("cls");
                    Appoint(head);
                    printf("Do u  want to avail for adv payment option?");
                    scanf("%d", &d);
                    if (d == 1)
                    {
                        printf("Redirecting to payment gateway...");
                        system("cmd /c start https://www.the-qrcode-generator.com");
                        system("cls");
                        break;
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                }
                else if (appoint1 == '2')
                {
                    system("cls");
                    break;
                }
                else if (appoint1 == '3')
                {
                    printf("\n\n\t\tYou can take appointment on emergency basis\n\n");

                    time_t t; // not a primitive datatype
                    time(&t);

                    printf("\nYou can take emergency appointment on the spot only (date and time):\n\n%s", ctime(&t));

                    printf("\n\n\t\t\tGet Well Soon!!!!\n\n\n");
                    Appoint(head);
                    break;
                }
                else
                {
                    printf("Wrong Command!!!\n\n");
                    goto patient_again;
                }
            }
        }
        else if (query == '2')
        {
            while (1)
            {
                system("cls");
                printf("                      *********Doctor's Menu*********\n");
                printf("1.Show list\n2.Call next\n3.Back to main menu.\n\n\n");
                scanf(" %c", &query2);
                if (query2 == '1')
                {
                    system("cls");
                    Showlist(head);
                }
                else if (query2 == '2')
                {
                    system("cls");
                    Call(head);
                }
                else if (query2 == '3')
                {
                    system("cls");
                    break;
                }
                else
                {
                    printf("Wrong Command!!!\n\n");
                    continue;
                }
            }
        }
        else if (query2 == '3')
        {
            exit(0);
        }
        else
        {
            printf("Wrong Command!!!\n\n");
            goto main_again;
        }
    }
    return 0;
}
