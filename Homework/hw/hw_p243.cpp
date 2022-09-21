//program to concatenate two strings using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    
    char str1[20], str2[20], str3[40];
	char *p1=str1, *p2=str2, *p3=str3;

	printf("Enter string 1:");
	scanf("%s", str1);
	fflush(stdin);
	printf("Enter string 2:");
	scanf("%s", str2);
	
	strcpy(p3, p1); //copy str1 to str3
	strcat(p3, p2); //add str2 to str3

	printf("%s",p3);

}