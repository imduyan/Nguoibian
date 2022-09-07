#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.
    
    char fn[10], ln[30];//declare last and first name

    printf(">>Please enter your first name:");
    scanf("%[^\n]s", fn);
    fflush(stdin);
    printf(">>Please enter your last name:");
    //scanf("%[^\n]s", ln);
    gets(ln);
    fflush(stdin);
    printf(">>Your name is: %s %s", ln, fn);

}