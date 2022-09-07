// program to reverse array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    int num[11], n;

    do
    {
        printf("Enter n [1-10]:");
        scanf("%d", &n);
    } while (n<1 || n>10);

    for(int i=0; i<n; i++){
        printf("Enter value for array num[%d]:", i);
        scanf("%d", &num[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    int temp;

    for(int i=0; i<(n/2); i++){
        temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }

    printf("\nReserved array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    
}