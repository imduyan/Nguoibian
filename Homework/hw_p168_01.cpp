// program to print the series 100, 95 , 90, 85,…, 5
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls"); //clear screen

    int i;

    for (i = 100; i >= 5; i -= 5)
    {
        if (i > 5)
        {
            printf("%d, ", i);
        }
        else if (i == 5)
        {
            printf("%d.", i);
        }
    }
}
