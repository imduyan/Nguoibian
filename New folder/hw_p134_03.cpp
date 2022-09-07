#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int a, b, c;

    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    
    c=a-b;

    if (abs(c)==a)
    {
        printf("Difference is equal to value %d", a);
    }
    else if (abs(c)==b)
    {
        printf("Difference is equal to value %d", b);
    }
    
    else{
        printf("Difference is not equal to any of the values entered");
    }
}