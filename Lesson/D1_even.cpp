#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,r ;
    printf(">> Nhap so cho num:");
    scanf("%d", &num);
    r = num % 2;
    if(r==0)
    {
        printf(">> %d is even!!\n", num);
    }
    printf(">> Finished..");
}