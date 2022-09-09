//program have a return-value
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare function square() - [declare prototype]
int square(int x);

int main(){
    system("cls");

    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    printf(">>Square of %d: %d", n, square(n));
    
}

/*
    function return square of a random number(x)
    function name: square()
    argument: int
    type: int
*/
int square(int x){
    return x*x;
}