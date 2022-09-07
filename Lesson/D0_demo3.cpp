#include <stdio.h>
#include <stdlib.h>

int main()
{
    //delete screen
    system("cls");
    
    //khai bao a b c d kieu so nguyen
    int a = 10, b = 6;
    int c = a + b;
    int d = a / b;

    //in ra man hinh
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, d);
    printf("%d %% %d = %d\n", a, b, a % b);
    
}



