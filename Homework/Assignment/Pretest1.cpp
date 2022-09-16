#include <stdlib.h>
#include <stdio.h>

int main(){
    system("cls");

    char choice;int count=0;int n[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number:"); scanf("%d", &n[i]); fflush(stdin);
        printf("cdontinue?"); scanf("%c", &choice);
        if (choice=='n')
        {
            break;
        }
        count++;
    }
    
    
    /*while (1==1)
    {
        int i=0;
        printf("enter a number:"); scanf("%d", &n[i]); fflush(stdin); i+=1; count+=1;
        printf("continue?"); scanf("%c", &choice);
        if (choice=='n')
        {
            break;
        }
    }*/
    for (int j = 0; j <= count; j++)
    {
        printf("\n%d", n[j]);
    }
    
    
    
}