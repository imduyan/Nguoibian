#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int n;
    printf("enter a number:");
    scanf("%d", &n);

    if (n%2 == 0)
    {
      printf("%d is even", n);
    }
    else{
        printf("%d is odd", n);
    }
    printf("\nFinished!");
}