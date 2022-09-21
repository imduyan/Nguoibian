#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int basic_salary, allowance;
    char grade;

    printf("Enter employee's basic salary:");
    scanf("%d", &basic_salary);
    printf("Enter grade of allowance [A/B/Others]:");
    fflush(stdin);
    scanf("%c", &grade);
    fflush(stdin);

    switch (grade)
    {
    case 'A':
    case 'a':
        allowance = 300;
        break;
    case 'B':
    case 'b':
        allowance=250;
        break;
    default:
        allowance=100;
        break;
    }
    printf("The salary at the end of the month: %d", basic_salary+allowance);
}