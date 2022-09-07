#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int a, b;

    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    
    if (a*b>=1000)
    {
        printf("The product of %d and %d is equal to or greater than 1000", a, b);
    }
    else{
        printf("The product of %d and %d is not equal to or greater than 1000", a, b);
    }
}