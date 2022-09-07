// program to  find the minimum and the maximum value in an array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("cls");

    int high, low, num[5];

    for(int i=0; i<5; i++){
        printf("Enter value for array num[%d]:", i);
        scanf("%d", &num[i]);
    }

    high=low=num[0];

    for(int i=1;i<5;i++){
        high = (num[i]>high) ? num[i] : high;
        low = (num[i]>low) ? low : num[i];
    }

    printf(">>The maximum value is: %d", high);
    printf("\n>>The minimum value is: %d", low);
}