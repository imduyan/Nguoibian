#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    /*char w;

    printf("Enter a letter:");
    scanf("%c", &w);*/

    char w;//version 2: Use getchar()

    printf("Enter a letter:");
    w=getchar();

    if (w>= 48 && w <=57){
      printf("%c is a number letter", w);
    }
    else{
      printf("\nFinished!");
    }

}