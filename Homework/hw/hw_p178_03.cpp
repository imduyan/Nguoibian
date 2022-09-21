// program to print a multiplication table for a given number
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    for(int i=1; i<=9; i++){
        printf("%3d * %2d = %2d\n", n, i, i*n);
    }
    
}
