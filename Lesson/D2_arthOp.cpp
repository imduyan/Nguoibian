#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() //demo phep toan so hoc
{
    system("cls"); //delete creen

    int a, b, c; //declare a,b,c

    printf("Type the first number:");
    scanf("%d", &a);
    printf("Type the second number:");
    scanf("%d", &b);
    /*printf("Type the third number:");
    scanf("%d", &c);*/

    //print unary oparator result
    printf("unary");
    printf(" -%d = %d \n ", a, -a);
    printf(" --%d = %d \n", a, --a);
    printf(" ++%d = %d \n", a, ++a);
    printf(" %d-- = %d \n", a, a--);
    printf(" %d++ = %d \n", a, a++);
    printf(" %d", a);

    //print binary operator result:
    printf("\n Binary");
    printf("\n %d + %d = %d", a, b, c=a+b);
    printf("\n %d - %d = %d", a, b, c=a-b);
    printf("\n %d / %d = %d", a, b, c=a/b);
    printf("\n %d * %d = %d", a, b, c=a*b);
    printf("\n %d %% %d = %d", a, b, c=a%b);
    printf("\n %d ^ %d = %.2lf", a, b, pow(a,b));

    //print bitwise operator result:
    printf("\n Bitwise");
    printf("\n And: %d & %d =%d", a, b, a&b);
    printf("\n Or: %d | %d =%d", a, b, a|b);
    printf("\n Xor: %d ^ %d =%d", a, b, a^b);

}