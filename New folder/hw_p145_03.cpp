//program find the highest number
#include <stdio.h>
#include <stdlib.h>

int main(){
 
    system("cls");

    int v1, v2, v3;

    printf("Enter variable 1:");
    scanf("%d", &v1);
    printf("Enter variable 2:");
    scanf("%d", &v2);
    printf("Enter variable 3:");
    scanf("%d", &v3);

    int max = (v1 > v2) ? v1 : v2; //gan nhanh
    max = (max > v3) ? max : v3;
    
    /*if(v1>v2){
        max = v1;
    }
    else{
        max = v2;
    }
    if (v2>v3)
    {
        max = v2;
    }
    else{
        max = v3;
    }*/

    printf("The highest value is: %d", max);
}