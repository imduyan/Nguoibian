// program calculate sum n whole number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    int n, sum = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if(i<n){
        printf(" %d +", i);
        }
        else{
            printf(" %d ", i);
        }
        sum += i; //sum=sum+i
    }
    printf("= %d", sum);
}