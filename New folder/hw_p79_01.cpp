#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    float a, b, c, e;
    printf("Enter three number!\n");
    printf("The first num is:");
    scanf("%f", &a);
    printf("The second num is:");
    scanf("%f", &b);
    printf("The third num is:");
    scanf("%f", &c);
    e=(a+b+c);
    printf("Sum of 3 num is: %.2f", e);
}