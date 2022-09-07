// program to  count the number of vowels and the number of consonants in a word.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    char word[20];
    int i, count_v=0, count_c=0;

    printf("Enter string:");
    gets(word);

    for(i=0; word[i]!='\0';++i){  
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i' || word[i] == 'o' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            count_v+=1;
        }
        else if((word[i] >= 'a' && word[i]<='z') || (word[i] >= 'A' && word[i]<='Z')){
            count_c+=1;
        }
    }

    printf("The number of vowels in the line of text: %d", count_v);
    printf("\nThe number of consonants in the line of text: %d", count_c);
    
}
