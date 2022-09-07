//program enter a list of numbers and a number want to find, then check if it appear how many time?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls"); //clear screen

    int n; //n is in 1 to 10

    do
    {
        printf("Enter n [1-10]:");
        scanf("%d", &n);
    } while (n<1 || n>10);

    int a[n]; //declare array a include n elements

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]:",i+1);
        scanf("%d", &a[i]);
    }

    int e; //e is the number that user wants to find

    printf("Enter a number to find:");
    scanf("%d", &e);

    int count=0; 

    for (int i = 0; i < n; i++)
    {
        if(a[i]==e){
            count+=1;
        }
    }

    if (count==1){
        printf("The number %d appear 1 time.", e);
    }
    else if (count>1)
    {
        printf("The number %d appear %d times.", e, count);
    }
    else
    {
        printf("The number %d doesn't appear!!", e);
    }
    
} 
