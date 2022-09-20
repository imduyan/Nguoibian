//  TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Place to declare struct
struct rectangle
{
    int width, height;
    char color[10];
}; typedef struct rectangle rtg;


// Place to define function
void templ();
void rtgle();
void oddivi();

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
            oddivi();
            break;
        case 2:
            rtgle();
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

void oddivi(){
    int n, count=0;

    printf("Enter a number:"); scanf("%d", &n);
    printf("Odd divisors of %d are:", n);

    for (int i = 0; i < n; i++)
    {
        if (i%2==1 && n%i==0)
        {
            count+=1;
            printf("%d ", i);
        }
    }
    printf("\nNumber of odd divisor of 30: %d", count);
    fflush(stdin);
}

void rtgle(){
    int n;
    while (1==1)
    {
        printf("Enter the number of rectangle:[1-10]"); scanf("%d", &n);
        if (n>0&&n<=10)
        {
            break;
        }
    }

    rtg list[n];
    printf("Please enter data for\n");
    for (int i = 0; i < n; i++)
    {
        printf("Rectangle no %d:", i+1);
        printf("\nWidth:"); scanf("%d", &list[i].width);
        printf("Height:"); scanf("%d", &list[i].height);
        printf("Color:"); fflush(stdin); gets(list[i].color);
    }
    
    printf("\nLists of Rectangles");
    printf("\n%2s %5s   %6s     %4s   %-10s", "No", "Width", "Height", "Area", "Color");
    printf("\n=====================================");
    for (int i = 0; i < n; i++)
    {
        printf("\n%2d %5d   %6d     %4d   %-10s", i+1, list[i].width, list[i].height, list[i].height*list[i].width, list[i].color);
    }
    printf("\nTotal %d Rectangles", n);
}