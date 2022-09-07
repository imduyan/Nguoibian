// program save list of n student's name and find student for required-name
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls"); // clear screen

    int n;

    while (1 == 1)
    {
        printf("Enter the number of student[3-10]:");
        scanf("%d", &n);
        if (n >= 3 && n < 10)
        {
            break;
        }
    }

    fflush(stdin);

    char tensv[n][31]; // declare string include n element and each element has 30 character.

    // loop enter student's name
    for (int i = 0; i < n; i++)
    {
        printf(">> Enter No.%d student's name:", i + 1);
        gets(tensv[i]);
    }

    // loop print table list of student's name.
    printf("\nList of student's name:");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d. %s", i + 1, tensv[i]);
    }

    // declare string contain name of student want to find
    char s[31];
    printf("\n\nEnter name of student want to find:");
    gets(s);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (strstr(tensv[i], s))
        {
            printf("\n%d. %s", count + 1, tensv[i]);
            count++;
        }
    }
    if (count == 0)
    {
        printf(">>Can't find any student name %s!!!", s);
    }
}