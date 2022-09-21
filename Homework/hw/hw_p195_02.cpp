// program to  count the number of vowels in a line of text.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    char string[101]; //declare a string include max 100 character
    printf("Enter string:");
    gets(string);

    //declare a string contain vowels
    char vowels[] = "AEIOUaeiou";

    //declare variable count vowels in text
    int count=0; 

    //declare variable contain total of character in text string
    int n = strlen(string);

    /*for(int i=0; string[i]!='\0';++i){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'u' || string[i] == 'i' || string[i] == 'o' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            count+=1;
        }
    }*/

    for(int i=0; string[i]!='\0';++i){
        if (strchr(vowels, string[i])){
            count++;
            printf(" %c ", string[i]);
        }
    }

    printf("\nThe number of vowels in the line of text: %d", count);

}