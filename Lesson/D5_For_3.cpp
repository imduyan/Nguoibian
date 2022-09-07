//demo basic for loop print program c so easily 10 times
#include <stdio.h>
#include <stdlib.h>

int main()
{               
    system("cls"); // clear screen

    int n;
    char message[31];

    printf("Enter a number:");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter a message:");
    gets(message);

    for(int i=0; i<n; ++i){
        printf("%3d. %s\n", i+1, message);
    }
    printf("\n>> FINISHED!");
}
