// demo do while for nested
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n; // enter n, n>=3 and <=10

    /*do
    {
        printf("Enter n[1-20]: ");
        scanf("%d", &n);
    } while ( n<1 || n>20 );*/

    do
    {
        printf("Enter n[1-20]: ");
        scanf("%d", &n);
        if( n>=1 && n<=20 ){
            break;
        }
    } while (1==1);


    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}