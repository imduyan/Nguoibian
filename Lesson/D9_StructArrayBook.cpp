//Program manage a book list
#include <stdio.h>
#include <stdlib.h>

// define data type [book] include: ID, Title, price.
struct BOOK  
{
    char id[15], title[41];
    int price;
};

void fn_book(); //declare fn_book() function

int main(){
    system("cls");

    fn_book();//invoke function

}

//list book management function
void fn_book(){
    int n;
    do
    {
        printf(">>Enter the numbers of book to manage:");
        scanf("%d", &n);
    } while (n<=0||n>10);
    
    //declare a array list[] contain n-book
    struct BOOK list[n];
    
    //loop enter detail infor of n-books
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter book %d", i+1);
        printf("\nID:"); gets(list[i].id);
        printf("Tittle:"); gets(list[i].title);
        printf("Price:"); scanf("%d", &list[i].price);
    }
    
    //print list of books in array list[]
    printf("\n---Book list---");
    printf("\n%2s  %-4s %20s %4s","No", "ID", "Title", "Price");
    for (int i = 0; i < n; i++)
    {
        
        printf("\n%2d. %-4s %-20s %4d", i+1, list[i].id, list[i].title, list[i].price);
    }
    
}