/*program to Find the sum of all odd numbers between the two
numbers entered*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    int n1, n2, sm, bg, s = 0;

    printf("Enter n1:");
    scanf("%d", &n1);
    fflush(stdin);
    printf("Enter n2:");
    scanf("%d", &n2);

    bg = (n1 > n2) ? n1 : n2; //to know which is small/big num
    sm = (n1 > n2) ? n2 : n1;

    /*if(n1>n2){
        int temp = n2;
        n2=n1;
        n1=temp;
    }*/      //after that, n1<n2

    int i = sm;

    if (sm % 2 == 0)
    {
        i = i + 1;
    }
    else if (sm % 2 == 1)
    {
        i += 2;
    }

    printf("Sum of odds between %d and %d:", sm, bg);
    for (i; i < bg; i += 2)
    {
        s += i;
        
        if (i==(bg-1) || i==(bg-2))
        {
            printf("%d =", i);
        }
        else if(i<bg)
        {
            printf("%d + ", i);
        }
        
    }
    printf(" %d", s);
}
