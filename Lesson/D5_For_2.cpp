//demo basic for loop
#include <stdio.h>
#include <stdlib.h>

int main()
{               
    system("cls"); // clear screen

    //print program c so easily 10 times

    int n;

    printf("Enter a number:");
    fflush(stdin);
    scanf("%d", &n);

    for(int i=0; i<n; ++i){
        printf("%d. Program C so easily!\n", i+1);
    }
    printf(">> FINISHED!");
}