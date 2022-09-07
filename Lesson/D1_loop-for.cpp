#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    printf("nhap so lan ban muon:");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n e hoc code lan thu %d..", i+1 );
    }
}