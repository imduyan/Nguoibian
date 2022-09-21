//  TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//Place to declare struct


//Place to define function
void templ();

int main()
{
    system("cls"); // clear screen

    int choice; //Declare choice variable

    /*  while loop create Menu to choose
        1.
        2.
        3. return
    */
    while (1 == 1)
    {
        templ();
        printf("\nPlz enter your choice [1-3]:"); scanf("%d", &choice); fflush(stdin);

        switch (choice)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice!!!");
            break;
        }
        printf("\nPress any key...");
        getch(); //wait for user enter any key
    }
}

// template function in while loop in main()
void templ(){
    system("cls");
    printf("****************************************************");
    printf("\n* Selecting appropriate action:                    *");
    printf("\n*       1. Question 1                              *");
    printf("\n*       2. Question 2                              *");
    printf("\n*       3. Exit                                    *");
    printf("\n****************************************************");
}
