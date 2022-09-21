// program to arrange the following names in alphabetical order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    char name[7][10], temp[10];

    printf("Enter 7 name.\n");

    for (int i = 0; i < 7; i++)
    {
        printf(">> Enter No.%d name:", i+1);
        gets(name[i]);
    }

    printf("\nList names:");
    for (int i = 0; i < 7; i++)
    {
        printf("\n%d. %s", i+1, name[i]);
    }

    for (int i=0; i<6;++i){
        for (int j=i+1; j<7; ++j){
            if (strcmp(name[i], name[j])>0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nThe order of names:");
    for(int i=0;i<7;++i){
        printf("\n%d. %s",i+1, name[i]);
    }
}
