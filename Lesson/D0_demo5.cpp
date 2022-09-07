#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf(" >> Giai pt bac 1: \n \n");
    
    int a,b;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    
    if(a==0)
    {
        if(b==0)
        {
            printf("pt vo so ngiem\n");
        }
        else
        {
            printf("pt vo nghiem\n");
        }
    }
    else
    {
        if(a==1){
            printf(">> pt x + %d =0 \n, b",b);
            printf(">> co nghiem x = %f \n", -(float)b/a);
        }
        else{
        printf(">> pt %dx + %d =0 \n", a,b);
        printf(">> co nghiem x = %f \n", -(float)b/a);
        }
    }
}