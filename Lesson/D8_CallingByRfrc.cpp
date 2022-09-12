//demo calling by reference
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ptb2(int a, int b, int c, double &x1, double &x2);

int main(){
    system("cls");

    int A, B, C;
    double X1, X2;

    printf("Giai pt bac 2.\n");
    printf("Nhap a:");
    scanf("%d", &A);
    printf("Nhap b:");
    scanf("%d", &B);
    printf("Nhap c:");
    scanf("%d", &C);

    int kq = ptb2(A,B,C,X1,X2);

    if (kq==-1)
    {
        printf("Pt vo nghiem");
    }
    else if (kq==0)
    {
        printf("Pt co nghiem kep x1 = x2 = %.2f \n", X1);
    }
    else{
        printf("pt co 2 nghiem: x1 = %.2f, x2 = %.2f.\n", X1, X2);
    }
    
}

/*
    function solve ptb2
    function name: ptb2 - type:   ax^2 + bx + c = 0
    argument: int a, int b, int c, double x1, double x2
    type: int [-1: pt vo nghiem, 0: pt co nghiem kep, 1: pt co 2 nghiem]
    way to calling by reference: add '&' precede variable name    or    add '*' before variable after call function
*/
int ptb2(int a, int b, int c, double &x1, double &x2){
    double delta = b*b - 4*a*c;
    if (delta<0)
    {
        return -1; //pt vo nghiem !
    }
    else if (delta==0)
    {
        x1 = x2 = -b/(2*a);
        return 0; //pt co nghiem kep
    }
    else{
        x1 = (-b-sqrt(delta))/2*a;
        x2 = (-b+sqrt(delta))/2*a;
        return 1; //pt co 2 nghiem pb
    }
}