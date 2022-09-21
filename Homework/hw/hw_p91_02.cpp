#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");//clear screen.

    float c, i, f;

    printf(">>Please enter number:");
    scanf("%f", &c);
    printf(">>You enter: %.1f (cm)", c);
    
    i=c/2.54;
    f=i/12;

    printf("\n>>%.1f (cm) was change to %.1f (inches)", c, i);
    printf("\n>>%.1f (cm) was change to %.1f (feet)", c, f);
    
}