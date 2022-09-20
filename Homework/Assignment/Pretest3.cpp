//  TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Place to declare struct
struct employee
{
    int no, salary, wd;
    char name[10];
}; typedef struct employee epe;


// Place to define function
void templ();
void factorial();
void employ();

int main()
{
    system("cls"); // clear screen

    int choice; // Declare choice variable

    /*  while loop create Menu to choose
        1.
        2.
        3. return
    */
    while (1 == 1)
    {
        templ();
        printf("\nPlz enter your choice [1-3]:");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            factorial();
            break;
        case 2:
            employ();
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice!!!");
            break;
        }
        printf("\nPress any key...");
        getch(); // wait for user enter any key
    }
}

// template function in while loop in main()
void templ()
{
    system("cls");
    printf("****************************************************");
    printf("\n* Selecting appropriate action:                    *");
    printf("\n*       1. Question 1                              *");
    printf("\n*       2. Question 2                              *");
    printf("\n*       3. Exit                                    *");
    printf("\n****************************************************");
}

void factorial(){
    int n, count=1;

    printf("Enter a number:"); scanf("%d", &n);
    printf("Factorial of %d are: ", n);

    for (int i = 1; i <= n; i++)
    {
        count*=i;
    }
    printf("%d", count);
    fflush(stdin);
}

void employ(){
    int n;
    while (1==1)
    {
        printf("Enter the number of employees:[1-100]"); scanf("%d", &n);
        if (n>0&&n<=100)
        {
            break;
        }
    }

   epe list[n];
    printf("Please enter data for\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee No. :"); scanf("%d", &list[i].no);
        printf("Name:"); fflush(stdin); gets(list[i].name);
        printf("Base salary :"); scanf("%d", &list[i].salary);
        printf("Worked days :"); scanf("%d", &list[i].wd);
    }
    
    printf("\nLists of Employees:");
    printf("\n%3s %-9s %8s %8s %10s", "No", "Name", "Base sal", "Wrk days", "Net salary");
    printf("\n=====================================================");
    for (int i = 0; i < n; i++)
    {
        printf("\n%3d %-9s %8d %8d %10d", list[i].no, list[i].name, list[i].salary, list[i].wd, list[i].salary*list[i].wd);
    }
    
}