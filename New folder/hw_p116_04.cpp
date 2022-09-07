#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int basic=2500, daper=55;
    float bonper=33.33, loandet=250.00, salary;
    char name[10];

    printf("Please enter your name:");
    gets(name);

    salary = basic + (basic*daper)/100 + (bonper*basic)/100 - loandet;

    printf("%-10.10s %10s %12s", "Name", "Basic", "Salary");
    printf("\n%-10.10s %10d %12.2f", name, basic, salary);
}