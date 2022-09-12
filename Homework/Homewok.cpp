#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

            //Function Declaration
/*Page 275*/int squarer(int x);
/*Page 276-1*/double factorial(int n);
/*Page 276-2*/void circle(double r, double &area, double &perimeter);

int main()
{
    system("cls"); //clearscreen

    //Declaration
    int n, choice;
    double AREA, PERIMETER, R;

    while (1==1)
    {
        system("cls");
        printf(" -- MENU --");
        printf("\n1. Square of a number.(Page 275)");
        printf("\n2. Factorial.(Page 276 - exercise 1)");
        printf("\n3. Get area, perimeter of Circle.(Page 276 - exercise 1)");
        printf("\n4. Exit.");
        printf("\n------------------");
        printf("\nPlz enter your choice [1-4]:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: //call squarer() function
            printf("Enter a number:");
            scanf("%d", &n);
            squarer(n);
            printf("The square of %d is: %d",n, squarer(n));
            break;
        case 2: //call factorial() function
            printf("Enter n:");
            scanf("%d", &n);
            printf("=>%d! = %.0f", n, factorial(n));
            break;
        case 3: //call circle() function
            printf("Enter r:");
            scanf("%lf", &R);
            circle(R, AREA, PERIMETER);
            printf(">>Area: %.2f", AREA);
            printf("\n>>Perimeter: %.2f", PERIMETER);
            break;
        case 4:
            return 0; //back to main() -> end program
        default:
            printf("Invalid choice!!!");
            break;
        }
        
        printf("\nPress any key...");
        getch();
    }
    
}

int squarer(int x){
    /*
    Function calculate square of a number accepted from keyboard
    Called in case 1
    */
    return (x*x);
}

double factorial(int n){
    /*
        Function calculate factorial number of a number accepted from keyboard
        Called in case 2
    */
    double s=1;
    for (int i = 1; i <= n; i++)
    {
        s*=i;
    }
    return s;
    
}

void circle(double r, double &area, double &perimeter){
    /*
        Function calculate area and perimeter of a circle with a number accepted from keyboard
        Argument: (r: radius, area, perimeter)
        Called in case 3
    */
    float pi=3.14;
    area=r*r*pi;
    perimeter=2*r*pi;
}

