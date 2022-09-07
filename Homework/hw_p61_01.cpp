#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("CLS"); //delete screen

    //declare
    int r;
    float py = 3.14, S, P;
    
    //display for requesting information
    printf(">> Please type the radius:");
    scanf("%d", &r);

    //expressions
    S = py*r*r;
    P = 2*py*r;

    //display the result
    printf(">> The area of the circle is: %.2f", S);
    printf("\n>> The perimeter of the circle is: %.2f", P);
}