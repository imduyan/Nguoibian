// program demo comma operator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n;

    printf("Enter a integer number:");
    scanf("%d", &n);

    for(int i=1, j=n; i<=n; ++i, --j){
        printf("\ni = %d, j = %d", i, j);
        printf("%2d + %2d = %2d", i, j, i+j);
    }
}