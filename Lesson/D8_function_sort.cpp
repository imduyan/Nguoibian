// program sort numbers for ascending and descending order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
function name: fn
formal argument:list[], n
actual argument:a[], 8
void: function not return value
*/
void fn(int list[], int n){
    for (int i = 0; i < n; i++)
    {
        printf(" %d", list[i]);
    }
}


int main()
{
    system("cls");

    int a[] = {12, 9, 100, 546, 12, 45, 55, 4};



    // print list of numbers
    printf("list of number:");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }



    int temp;
    // compare a[0] to a[7] to sort
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] > a[j])
            {
                // inverted a[i] and a[i]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nAscending order of numbers:");
    fn(a,8); //command call function fn() with 2 actual arguments is a and 8



    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] < a[j])
            {
                // inverted a[i] and a[i ]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nDscending order of numbers:");
    fn(a,8);

}
