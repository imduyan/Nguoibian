#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); //delete creen

    float x, y; //declare C and F temperature

    printf(">> Please type C temperature:");
    scanf("%f", &x);

    y = (x*9)/5 +32; //change C to F

    printf("\n>> %.2f degrees C was changed to F temperature is: %.2f degrees F", x, y);
}