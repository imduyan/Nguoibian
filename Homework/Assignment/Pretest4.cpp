//  TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Place to declare struct
struct nation
{
    int  area;
    char name[10], captital[10];
}; typedef struct nation ntn;


// Place to define function
void templ();
void multiple();
void nation();

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
            multiple();
            break;
        case 2:
            nation();
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

void multiple(){
    int n1, n2, sum=0;

    printf("Enter the first number N1(<100):"); scanf("%d", &n1);
    printf("Enter the second number N2(<10):"); scanf("%d", &n2);

    printf("Multiples of %d (<=%d) are: ", n2, n1);
    for (int i = n2; i <= n1; i++)
    {
        if (i%n2==0)
        {
            printf("%d ", i);
            sum+=i;
        }
    }

    printf("\nSum of them are: %d", sum);
    
}

void nation(){
    int n;
    while (1==1)
    {
        printf("Enter the number of countries[1-9]:"); scanf("%d", &n);
        if (n>0&&n<10)
        {
            break;
        }
    }

    ntn list[n];
    printf("Please enter data for\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee No %d:\n", i+1); 
        printf("Name:"); fflush(stdin); gets(list[i].name);
        printf("Capital:"); fflush(stdin); gets(list[i].captital);
        printf("Area (Square miles):"); scanf("%d", &list[i].area);
    }
    
    ntn temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (list[i].area<list[j].area)
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;   
            }
        }
    }
    printf("The largest nation is %s", list[0].name);
}