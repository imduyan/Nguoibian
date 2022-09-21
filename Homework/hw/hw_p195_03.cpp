// program to reserve array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    int temp, num[5]={34, 45, 56, 67, 89};

    for(int i=0, j=4; i<5/2; i++, j--){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("Reserved array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    
}