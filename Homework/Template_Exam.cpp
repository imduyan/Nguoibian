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
        printf("\nPlz enter your choice [1-4]:"); scanf("%d", &choice); fflush(stdin);

        if (choice == 1)
        {
           
        }
        if (choice == 2)
        {
           
        }
        if (choice == 3)
        {
            
        }
        if (choice == 4)
        {
            return 0;
        }
        else
        {
            printf("Invalid choice!!!");
        }
        printf("\nPress any key...");
        getch(); //wait for user enter any key
    }
}

// template function in while loop in main()
void templ(){
    system("cls");
    printf(" -- MENU --");
    printf("\n1. C Program to display the number of times a specified character occurs in a string.");
    printf("\n2. C Program to add 5 names followed by a prefix.");
    printf("\n3. C Program to display the maximum and minimum temperature for each of 5 cities.");
    printf("\n4. Exit.");
    printf("\n------------------");
}