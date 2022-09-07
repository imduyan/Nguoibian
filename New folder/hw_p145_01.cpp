// program to show 2 number x and y if they are correct
#include <stdio.h>
#include <stdlib.h>

int main(){
 
    system("cls");//clear screen

    int x, y;//declare x and y

    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);

    if (x <= 2000 || x >= 3000) //check x
    {
        printf("Number x: %d", x);
    }
    else{
        printf("Invalid!");
    }
    
    if (y >= 100 && y <= 500) //check y
    {
        printf("\nNumber y: %d", y);
    }
    else{
        printf("Invalid!");
    }

}