#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
    system("cls");
    char s1[80], s2[80];
    int n1, n2, n12;

    printf("Enter the first string:");
    gets(s1);
    printf("Enter the second string:");
    gets(s2);
    printf("%d", strstr(s2,s1)-s2);
}