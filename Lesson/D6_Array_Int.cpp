// demo array print the highest, lowest and average number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n;

    while (1 == 1)
    {
        printf("Enter the number of element of array[5-20]:");
        scanf("%d", &n);
        if (n >= 5 && n <= 20)
        {
            break;
        }
    }

    int a[n]; // declare array a[] include n number

    for (int i = 0; i < n; ++i)
    {
        printf("Enter value a[%d]:", i);
        scanf("%d", &a[i]); // enter a number and store into element i+1 of array a
    }

    int min = a[0], max = a[0], sum = 0;

    // print element in array
    printf("\n >> Entered number string:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // print element i+1 if array a[i]

        min = (min < a[i]) ? min : a[i]; // find the lowest number between min and a[i]
        max = (max > a[i]) ? max : a[i]; // find the highest number between mmax and a[i]
        sum += a[i];
    }
    printf("\n\n>> Min number: %d", min);
    printf("\n>> Max number: %d", max);
    printf("\n>> Average: %.2f", (float)sum / n);
    
}