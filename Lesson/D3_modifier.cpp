#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    //declare data type variable contain product name
    char tensp1[] = "coca cola";
    char tensp2[] = "cake chocolate (big)";
    
    //declare real number variable contain invoice
    float dg1 = 12.69, dg2 = 149.999;

    //declare whole number variable contain quantity
    int sl1 = 3, sl2= 10;

    //print receipt
    printf("\t  SALE BILL \n");
    printf("%-20.20s %10s %9s %13s","Product Name","Quantity","Price ","Total Money ");

    printf("\n%-20.20s %10d %8.2f %13.2f", tensp1, sl1, dg1, sl1*dg1);
    printf("\n%-20.20s %10d %8.2f %13.2f", tensp2, sl2, dg2, sl2*dg2);

}