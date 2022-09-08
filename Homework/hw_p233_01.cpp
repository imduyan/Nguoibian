//program to accept a string and find out if it is a palindrome.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");

    char string[30];
    printf("Enter a String (max30):");
    scanf("%s", string);

    int count=0, length=strlen(string);

    for(int i=0; i<length; i++){
        if (string[i] != string[length-i-1]) //compare i and length of string-i-1
        {
            printf("%s is not a palindrome.", string);
            count++;
            break;
        }
    }
    
    if (count==0) //if no difference 
    {
        printf("%s is a palindrome.", string);
    }

}