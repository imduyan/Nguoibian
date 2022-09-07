#include <stdio.h>
#include <stdlib.h>

//program demo pointer
int main(){
    system("cls");

    //declare int a 
    int a[] = {17, 22, 76, 67, 76};

    for (int i=0; i<6; i++){
        printf(" a + %d = %X [%d] (%2d)\n",i, a, a+i,*(a+i) );
    }
}