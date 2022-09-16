//  Amstrong
#include <stdlib.h>
#include <stdio.h>

void Amstrong();

int main(){
    system("cls");

    Amstrong();
}

void Amstrong(){
    int x, n, n2, count=0;

    do
    {
        printf("Enter the number:[1-10000]:"); scanf("%d", &x); n=n2=x;
    } while (x<1 || x>10000);
    
    do
    {
        count++;
        x=x/10;
    } while (x>=1);
    
    int SumAll=0;
    for (int i = 1; i <= count; i++)
    {
        int SumOne=1;
        for (int i = 1; i <= count; i++)
        {
            SumOne*=n2%10;
        }
        n2/=10;
        SumAll+=SumOne;
    }

    if (SumAll==n)
    {
        printf("%d is a Amstrong number!", n);
    }
    else{
        printf("%d is not a Amstrong number!", n);
    }
}