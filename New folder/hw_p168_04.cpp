// program to display 1 to 5 stair
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    for (int i = 5; i >= 1; i--) // int i=1;i<=5;i++
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
