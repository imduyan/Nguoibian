//  TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Place to declare struct
struct mark
{
    int science, math, english;
};
struct student
{
    char name[31];
    int enrollment_no;
    struct mark mark;
}; typedef struct student studentt;

// Place to define function
void templ();
void stdent();

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

        if (choice == 1)
        {
            char choice1;
            int count = 0;
            int n[5];
            for (int i = 0; i < 5; i++)
            {
                printf("enter a number:");
                scanf("%d", &n[i]);
                fflush(stdin);
                printf("cdontinue?");
                scanf("%c", &choice1); fflush(stdin);
                if (choice1 == 'n')
                {
                    break;
                }
                count++;
            }

            for (int j = 0; j <= count; j++)
            {
                printf("\n%d", n[j]);
            }
        }
        if (choice == 2)
        {
            stdent();
        }
        if (choice == 3)
        {
            return 0;
        }
        else
        {
            printf("Invalid choice!!!");
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

void stdent(){
    int n;
    while (1==1)
    {
        printf("Enter how many students you want to enter details:");
        scanf("%d", &n);
        if (n>0&&n<=100)
        {
            break;
        }
        printf("the number must be between 1 and 100.");
        printf("\npress any key to continue-");
        getch();
    }

    studentt list[n];

    for (int i = 0; i < n; i++)
    {
        printf("Student no %d:", i+1); fflush(stdin);
        printf("\nName:"); gets(list[i].name);
        printf("enrollment no:"); scanf("%d", &list[i].enrollment_no);
        printf("Science mark:"); scanf("%d", &list[i].mark.science);
        printf("math mark:"); scanf("%d", &list[i].mark.math);
        printf("english mark:"); scanf("%d", &list[i].mark.english);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent no %d:", i+1);
        printf("\nName: %s", list[i].name);
        printf("\nenrollment no: %d",list[i].enrollment_no); 
        printf("\nScience mark: %d", list[i].mark.science);
        printf("\nmath mark: %d", list[i].mark.math); 
        printf("\nenglish mark: %d", list[i].mark.english); 
        printf("\nTotal mark: %d", list[i].mark.science+list[i].mark.math+list[i].mark.english);
        printf("\nAverage mark: %d\n", (list[i].mark.science+list[i].mark.math+list[i].mark.english)/3);
    }
    fflush(stdin);
}