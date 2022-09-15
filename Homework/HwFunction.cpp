#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Function Declaration
/*Page 275*/ int squarer(int x);
/*Page 276-1*/ double factorial(int n);
/*Page 276-2*/ void circle(double r, double &area, double &perimeter);
/*Page 291-2*/float average(int n, int a[]);

int main()
{
    system("cls"); // clearscreen

    // Declaration
    double AREA, PERIMETER, R;
    int n, choice;
    
    while (1 == 1)
    {
        system("cls");
        printf(" -- MENU --");
        printf("\n1. Square of a number.(Page 275)");
        printf("\n2. Factorial.(Page 276 - exercise 1)");
        printf("\n3. Get area, perimeter of Circle.(Page 276 - exercise 1)");
        printf("\n4. string 1 in string 2");
        printf("\n5. average.");
        printf("\n6. Exit.");
        printf("\n------------------");
        printf("\nPlz enter your choice [1-6]:");
        scanf("%d", &choice);

        switch(choice){
        case 1: // call squarer() function
            printf("Enter a number:");
            scanf("%d", &n);
            squarer(n);
            printf("The square of %d is: %d", n, squarer(n));
            break;
        case 2: // call factorial() function
            printf("Enter n:");
            scanf("%d", &n);
            printf("=>%d! = %.0f", n, factorial(n));
            break;
        case 3: // call circle() function
            printf("Enter r:");
            scanf("%lf", &R);
            circle(R, AREA, PERIMETER);
            printf(">>Area: %.2f", AREA);
            printf("\n>>Perimeter: %.2f", PERIMETER);
            break;
        case 4:
            char s1[80], s2[80];
            int n1, n2, n12;

            printf("Enter the first string:");
            gets(s1);
            printf("Enter the second string:");
            gets(s2);

            if (strstr(s2, s1))
            {
                n12 = strstr(s2, s1) - s2; // vi tri xuat hien cua s1 trong s2
                n1 = strlen(s1);           // length of s1
                n2 = strlen(s2);           // length of s2
                if (n12 == (n2 - n1))
                {
                    printf(">>String %s appear at the end of string %s\n", s1, s2);
                }
                else
                {
                    printf(">>String %s appear in string %s locate %d \n", s1, s2, n12);
                }
            }
            else
            {
                printf("The first string doesn't appear in the second string");
            }
        case 5:
            int na;
            do
            {
                printf("Enter how many number you want to calculate average[1-10]:");
                scanf("%d", &na);
            } while (na<=0 || na>10);

            int num[10];

            for (int i = 0; i < na; i++)
            {
                printf("Enter no. %d:", i + 1);
                scanf("%d", &num[i]);
            }
            average(na, num);
            printf("The average is %d", average(na, num));
            break;
        case 6:
            return 0; // back to main() -> end program
        default:
            printf("Invalid choice!!!");
            break;
        }
        printf("\nPress any key...");
        getch();
    }
}

int squarer(int x)
{
    /*
    Function calculate square of a number accepted from keyboard
    Called in case 1
    */
    return (x * x);
}

double factorial(int n)
{
    /*
        Function calculate factorial number of a number accepted from keyboard
        Called in case 2
    */
    double s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}

void circle(double r, double &area, double &perimeter)
{
    /*
        Function calculate area and perimeter of a circle with a number accepted from keyboard
        Argument: (r: radius, area, perimeter)
        Called in case 3
    */
    float pi = 3.14;
    area = r * r * pi;
    perimeter = 2 * r * pi;
}

float average(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}
