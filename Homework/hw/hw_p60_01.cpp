#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    system("CLS");

    int a;
    
    printf(">>nhap so:");
    scanf("%d",&a);

    /*int b=a*a; 
    printf(">>%d squared is: %d", a, b);*/
    printf(">>%d squared is: %.2lf", a, pow(a,2));
}