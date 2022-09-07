//demo while for nested
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n=0; //enter n, n>=3 and <=10

    while (n<=3 || n >= 10 )
    {
        printf("Enter n[3-10]: ");
        scanf("%d", &n);
    }
    
    for(int i=n ; i>0 ; i-- ){
        for(int j=0 ; j<i ; j++ ){
            printf("*");
        }
        printf("\n");
    }
}