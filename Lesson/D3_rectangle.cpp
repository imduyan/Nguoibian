#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    float d, r, s, p;//declare

    printf(">>Please enter length:");
    scanf("%f", &d);
    printf(">>Please enter width:");
    scanf("%f", &r);
    
    s=d*r;
    p=(d+r)*2;

    printf("The area of the retangle is: %.2f\n", s);//display
    printf("The perimeter of the retangle is: %.2f", p);
}