// program sort numbers for ascending order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");

    int a[] = {12, 9, 100, 546, 12, 45, 55, 4};

    // print list of numbers
    printf("list of number:");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", a[i]);
    }

    int temp;

    // compare a[0] to a[7] to sort
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] > a[j])
            {
                // inverted a[i] and a[i ]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // print ascending order of numbers
    printf("Ascending order of numbers:");
    for (int i = 0; i < 8; i++)
    {
        printf("\n%d", a[i]);
    }
    
}