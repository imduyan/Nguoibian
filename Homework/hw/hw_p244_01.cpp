//program to  reverse a character array using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    
    char string[20], temp;
	char *pointer=string;

	printf("Enter character array:");
	scanf("%s", string);

	for (int i = 0, length=strlen(string); i < length/2; i++)
	{
		temp = pointer[i];
		pointer[i] = pointer[length-i-1];
		pointer[length-i-1] = temp;
	}
	
	printf("%s", pointer);
}