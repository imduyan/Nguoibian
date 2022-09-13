//demo advance data type - structure
#include <stdio.h>
#include <stdlib.h>

// define data type [book] include: ID, Title, price.
struct BOOK  
{
    char id[15];
    char title[41];
    int price;
};
int main(){
    system("cls");

    //define 2 variables b1, b2 with structure type [book]
    struct BOOK b1, b2;

    //enter data for book 1
    printf("Enter infor for book 1:");
    printf("\nID:"); gets(b1.id);
    printf("Title:"); gets(b1.title);
    printf("Price:"); scanf("%d", &b1.price);
    fflush(stdin);

    //enter data for book 2
    printf("Enter infor for book 2:");
    printf("\nID:"); gets(b2.id);
    printf("Title:"); gets(b2.title);
    printf("Price:"); scanf("%d", &b2.price);

    //print infor of these books:
    printf("\n -- Book list --");
    printf("\n%2s %10s %d", b1.id, b1.title, b1.price);
    printf("\n%2s %10s %d", b2.id, b2.title, b2.price);
}
