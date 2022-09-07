#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");//clear screen

    int year;
    printf("Program check leap year.\n");
    printf(">>Enter year:");
    scanf("%d", &year);
    if (year%4 == 0)
    {
        if (year%100 != 0){
            printf("%d is a loop year!", year);
        }
        else if (year%400 == 0){
            printf("%d is a century loop year!", year);
        }
        else {
            printf("%D is a century year!", year);
        }
    }
    else{
        printf("This is a normal year having 365 days!");
    }
    
}
