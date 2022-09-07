#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int a; //declare variable
    char k;
    float s;
    bool p = true;

    printf("Please enter your age and salary! ^^"); //accept user's information.
    printf("\n>> Your age:");
    scanf("%d", &a);
    fflush(stdin);
    printf("What currency would you like to enter your salary in? Dollar or VND?\n");

    while (p==true) //Loop to determine user's salary unit.
    {
        printf("Press d for dollar and v for VND:");
        scanf("%c", &k);
        fflush(stdin);
        
        if (k=='v')
        {
        printf("Please enter your salary:");
        scanf("%f", &s);
        printf(">> Your salary is: %.0f VND", s);
        p=false;
        }
        else if (k=='d')
        {
        printf("Please enter your salary:");
        scanf("%f", &s);
        printf(">> Your salary is: %.0f Dollar ", s);
        break;
        }
        /*else if (k!=0 & k!=1)
        {
            printf("PLEASE ENTER \"0\" OR \"1\" !!!\n");
            p=true;
        }*/
        else
        {
            printf("PLEASE ENTER \"d\" OR \"v\" !!!\n");
            p=true;
        }
    }
}