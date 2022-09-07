//demo nested for
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n=5;

    for(int i=n ; i>0 ; i-- ){
        for(int j=0 ; j<i ; j++ ){
            printf("*");
        }
        printf("\n");
    }
}