#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int times(char arr[40], char crt);
void templ();
void name_prefix(char name[5][30], char prefix[10]);
void max_min_temp(float temp[5][5], float max[5], float min[5]);

int main()
{
    system("cls"); // clear screen

    int choice; // declare choice variable

    while (1 == 1)
    {
        templ();
        printf("\nPlz enter your choice [1-4]:");
        scanf("%d", &choice);
        fflush(stdin);

        if (choice == 1)
        {
            char ch, charr[40];
            for (int i = 0; i < 5; i++)
            {
                int count = 0;
                printf("Enter a string:");
                gets(charr);
                printf("Enter a character:");
                scanf("%c", &ch);
                fflush(stdin);
                times(charr, ch);
                printf("The number of times a specified character occurs in a string: %d\n", times(charr, ch));
            }
        }
        if (choice == 2)
        {
            char five_name[5][30], prefix[10];

            printf("Enter five names.\n");
            for (int i = 0; i < 5; i++)
            {
                printf("Enter name %d:", i + 1);
                gets(five_name[i]);
            }
            printf("Enter a prefix:");
            gets(prefix);
            name_prefix(five_name, prefix);
        }
        if (choice == 3)
        {
            char city[5][20]; // declare 5 city
            float temp[5][5], max[5], min[5];

            // loop enter 5 temp of each city
            for (int i = 0; i < 5; i++)
            {
                printf(">>Enter city:");
                gets(city[i]);
                for (int j = 0; j < 5; j++)
                {
                    printf("Enter the average temperature year %d of %s city(Celsius):", 2017 + j, city[i]);
                    scanf("%f", &temp[i][j]);
                    fflush(stdin);
                }
            }

            // print temperature table of 5 city
            printf("\n-----------TEMPERATURE TABLE----------\n");
            printf("\n%2s %15s %23s", "No", "      Name     ", "   Average yearly temperature");
            for (int i = 0; i < 5; i++)
            {
                printf("\n%2d %-15s %4.2f, %4.2f, %4.2f, %4.2f, %4.2f.", i + 1, city[i], temp[i][0], temp[i][1], temp[i][2], temp[i][3], temp[i][4]);
            }

            // invoking function
            max_min_temp(temp, max, min);

            // print max and min temperature table of 5 city
            printf("\n\n-----------MAX & MIN AVERAGE TABLE----------\n");
            printf("\n%2s %15s %5s %5s", "No", "     Name     ", "Min", "Max");
            for (int i = 0; i < 5; i++)
            {
                printf("\n%2d %-15s %5.2f %5.2f", i + 1, city[i], min[i], max[i]);
            }

            char choice2, tam[30];
            int maxt, mint, choice3;
            while (1 == 1)
            {
                printf("\nDo you wanna sort?(Y/N):");
                scanf("%c", &choice2);
                fflush(stdin);
                if (choice2 == 'y' || choice2 == 'Y')
                {
                    printf("Choose option:");
                    printf("\n1.Sort by name.\n2.Sort by max.\n3.Sort by min.\nPlease choose:");
                    scanf("%d", &choice3);
                    fflush(stdin);
                    switch (choice3)
                    {
                    case 1:
                        for (int i = 0; i < 4; i++)
                        {
                            for (int j = i + 1; j < 5; j++)
                            {
                                if (strcmp(city[i], city[j]) > 0)
                                {
                                    strcpy(tam, city[i]);
                                    strcpy(city[i], city[j]);
                                    strcpy(city[j], tam);
                                    maxt = max[i];
                                    max[i] = max[j];
                                    max[j] = maxt;
                                    mint = min[i];
                                    min[i] = min[j];
                                    min[j] = mint;
                                }
                            }
                        }
                        printf("\n-----------MAX & MIN AVERAGE TABLE----------\n");
                        printf("\n%2s %15s %5s %5s", "No", "     Name     ", "Min", "Max");
                        for (int i = 0; i < 5; i++)
                        {
                            printf("\n%2d %-15s %5.2f %5.2f", i + 1, city[i], min[i], max[i]);
                        }
                        break;
                    case 2:
                        for (int i = 0; i < 4; i++)
                        {
                            for (int j = i + 1; j < 5; j++)
                            {
                                if (max[i] < max[j])
                                {
                                    strcpy(tam, city[i]);
                                    strcpy(city[i], city[j]);
                                    strcpy(city[j], tam);
                                    maxt = max[i];
                                    max[i] = max[j];
                                    max[j] = maxt;
                                    mint = min[i];
                                    min[i] = min[j];
                                    min[j] = mint;
                                }
                            }
                        }
                        printf("\n-----------MAX & MIN AVERAGE TABLE----------\n");
                        printf("\n%2s %15s %5s %5s", "No", "     Name     ", "Min", "Max");
                        for (int i = 0; i < 5; i++)
                        {
                            printf("\n%2d %-15s %5.2f %5.2f", i + 1, city[i], min[i], max[i]);
                        }
                        break;
                    case 3:
                        for (int i = 0; i < 4; i++)
                        {
                            for (int j = i + 1; j < 5; j++)
                            {
                                if (max[i] > max[j])
                                {
                                    strcpy(tam, city[i]);
                                    strcpy(city[i], city[j]);
                                    strcpy(city[j], tam);
                                    maxt = max[i];
                                    max[i] = max[j];
                                    max[j] = maxt;
                                    mint = min[i];
                                    min[i] = min[j];
                                    min[j] = mint;
                                }
                            }
                        }
                        printf("\n-----------MAX & MIN AVERAGE TABLE----------\n");
                        printf("\n%2s %15s %5s %5s", "No", "     Name     ", "Min", "Max");
                        for (int i = 0; i < 5; i++)
                        {
                            printf("\n%2d %-15s %5.2f %5.2f", i + 1, city[i], min[i], max[i]);
                        }
                        break;
                    default:
                        break;
                    }
                }
                else if (choice2 == 'n' || choice2 == 'N')
                {
                    break;
                }
            }
        }
        if (choice == 4)
        {
            return 0;
        }
        else if (choice <= 0 || choice > 4)
        {
            printf("Invalid choice!!!");
        }
        printf("\nPress any key...");
        getch();
    }
}

// template function in while loop
void templ(){
    system("cls");
    printf(" -- MENU --");
    printf("\n1. C Program to display the number of times a specified character occurs in a string.");
    printf("\n2. C Program to add 5 names followed by a prefix.");
    printf("\n3. C Program to display the maximum and minimum temperature for each of 5 cities.");
    printf("\n4. Exit.");
    printf("\n------------------");
}

// number of times occurs function
int times(char arr[40], char crt){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (crt == arr[i])
        {
            count += 1;
        }
    }
    return count;
}

// name modification function
void name_prefix(char name[5][30], char prefix[10]){
    printf("Modified names:\n");
    char new_name[5][30];
    for (int i = 0; i < 5; i++)
    {
        strcpy(new_name[i], prefix);
        printf("%s\n", strcat(new_name[i], name[i]));
    }
}

// function accept the average yearly temperature of 5 years of 5 cities
void max_min_temp(float temp[5][5], float max[5], float min[5]){
    int mx[5], mn[5];
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < 5; i++)
        {
            mx[i] = temp[k][i];
            mn[i] = temp[k][i];
            for (int j = 1; j < 5; j++)
            {
                mx[i] = (temp[k][j] > mx[i]) ? temp[k][j] : mx[i];
                mn[i] = (temp[k][j] < mn[i]) ? temp[k][j] : mn[i];
            }
        }
        max[k] = mx[0];
        min[k] = mn[0];
    }
}
