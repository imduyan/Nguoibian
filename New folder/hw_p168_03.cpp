// program to generate the Fibonacci series
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n, d = 1, f0 = 0, f1 = 1;

    do
    {
        printf("Enter the number of time[3-30]:");
        scanf("%d", &n);

    } while (n < 3 || n > 30);

    for (int i = 0; i <= n; i += 1)
    {
        printf("%d,", d);
        d = f0 + f1;
        f0 = f1;
        f1 = d;
    }
    printf("...");
}
