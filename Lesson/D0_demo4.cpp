#include <stdio.h>
#include <stdlib.h>

int main()
{
    //delete screen
    system("cls");
    
    printf(" *** MY CASIO *** \n");
    printf("=================== \n");
    //khai bao a b c d kieu so nguyen
    int a, b, c, d;
    
    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);
    c = a+b;
    printf("%d = %d + %d", c,a,b);

    
}



