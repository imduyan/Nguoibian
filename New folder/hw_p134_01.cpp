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
    
    if (a%b==0)
    {
        printf("a is divisible by b");
    }
    else{
        printf("a is not divisible by b");
    }
}