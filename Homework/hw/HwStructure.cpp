// structure try it yourself
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//declare struct inventory
struct inventory
{
    int number;
    char name[11];
    float rate;
    int quantity;
    float price;
};  typedef struct Student hs;
struct Student
{
    char name[31];
    float score;
};  typedef struct inventory invent;

struct student329
{
    char id[4], name[31], course[21];
    int yearjoin;
};  typedef student329 std3;


void inventory(); //define function inventory
void templ();
void student();
void student3();
void findid();

int main(){
    system("cls");

    int choice;

    while (1==1){
        templ();
        printf("\nPlz enter your choice [1-4]:"); scanf("%d", &choice); fflush(stdin);
        if (choice==1)
        {
            inventory();
        }
        else if (choice==2)
        {
            student();
        }
        else if (choice==3)
        {
            int choice2;
            while (1==1)
            {
                system("cls");
                printf(" Choose 1 or 2:");
                printf("\n1. display the details of students enrolled in a specified academic year");
                printf("\n2. display the details of a student based on a specified student ID.");
                printf("\n3. exit this.");
                printf("\n-------------------");
                printf("\nYour choice:"); scanf("%d", &choice2); fflush(stdin);
            
                if (choice2==1)
                {
                    student3();
                }
                else if (choice2==2)
                {
                    findid();
                }
                
                else if (choice2==3)
                {
                    break;
                }
                else{
                printf("Invalid!!!!");
                }
                printf("\nPress any key:");
                getch();
            }
        }
        
        else if (choice==4)
        {
            return 0;
        }
        else{
            printf("Invalid!!!!");
        }
        printf("\nPress any key:");
        getch();
    } 
}

void templ(){
    system("cls");
    printf(" -- MENU --");
    printf("\n1. C program to implement an inventory system.");
    printf("\n2. C program to store the names and scores of 5 students in a structure array.");
    printf("\n3. C Program to store student data in a structure.");
    printf("\n4. Exit.");
    printf("\n------------------");}

//inventory function
void inventory(){
    invent list[5];

    //loop accept details for five items
    printf("Enter detail for five items.\n");
    for (int i = 0; i < 5; i++)
    {
        printf(">>Enter item %d:\n", i+1);
        printf("Enter number:"); scanf("%d", &list[i].number);
        printf("Enter name:"); scanf("%s", &list[i].name);
        printf("Enter rate:"); scanf("%f", &list[i].rate);
        printf("Enter quantity:"); scanf("%d", &list[i].quantity);
        printf("Enter price:"); scanf("%f", &list[i].price);
    }
    
    //loop print name and total price
    printf("-----INVENTORY TABLE-----");
    printf("\n%-7s %11s", "Name", "Total price");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%-7s %11.2f", list[i].name, list[i].quantity*list[i].price);
    }
    
}

void student(){
    hs ds[5];

    //loop for accept infor of 5 students
    printf(">>Enter name and score of 5 students.\n");
    for (int i = 0; i < 5; i++)
    {   
        fflush(stdin);
        printf(">>>Student %d:", i+1);
        printf("\n>>Name:"); gets(ds[i].name);
        printf(">>Score:"); scanf("%f", &ds[i].score); 
    }

    //sort structure array in descending order of scores
    hs temp;
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (ds[i].score<ds[j].score)
            {
                temp=ds[i];
                ds[i]=ds[j];
                ds[j]=temp;
            }
        }
    }

    //loop display the top 3 scores
    printf("Top 3 score:");
    printf("\n%5s %-11s %4s", "", "  Name", "Score");
    for (int i = 0; i < 3; i++)
    {
        printf("\nTop %d %-11s %4.2f", i+1, ds[i].name, ds[i].score);
    }
}

//function display the details of student in a particular year.
void student3(){
    int n, yeartofind;
    
    printf("Enter the number of student:"); scanf("%d", &n); fflush(stdin);
    std3 liststudent[n];

    printf(">>Enter information of %d students.\n", n);
    for (int i = 0; i < n; i++)
    {   
        fflush(stdin);
        printf(">>>Student %d:", i+1);
        printf("\n>>ID:"); gets(liststudent[i].id);
        printf(">>Name:"); gets(liststudent[i].name);
        printf(">>Course:"); gets(liststudent[i].course);
        printf(">>Year:"); scanf("%d", &liststudent[i].yearjoin);
    }

    printf("Please enter a year to find:"); scanf("%d", &yeartofind); fflush(stdin);

    printf("Stundent join in %d:\n", yeartofind);
    printf("%3s %-20s %-20s %5s", "ID", "NAME", "COURSE REGISTED", "YEAR");
    for (int i = 0; i < n; i++)
    {
        if (yeartofind==liststudent[i].yearjoin)
        {
            printf("\n%3s %-20s %-20s %5d", liststudent[i].id, liststudent[i].name, liststudent[i].course, liststudent[i].yearjoin);
        }
    }
}

//function store student data in a structure.
void findid(){
    char ch[4];
    int n;

    printf("Enter the number of student:"); scanf("%d", &n); fflush(stdin);

    std3 liststudent[n];

    printf(">>Enter information of %d students.\n", n);
    for (int i = 0; i < n; i++)
    {   
        fflush(stdin);
        printf(">>>Student %d:", i+1);
        printf("\n>>ID:"); gets(liststudent[i].id);
        printf(">>Name:"); gets(liststudent[i].name);
        printf(">>Course:"); gets(liststudent[i].course);
        printf(">>Year:"); scanf("%d", &liststudent[i].yearjoin);
    }

    printf("Enter ID:"); scanf("%s", &ch);
    printf("\nDetails of a student based on ID:");
    printf("\n%3s %3s %-20s %-20s %5s","No", "ID", "NAME", "COURSE REGISTED", "YEAR");
    int c=1;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ch, liststudent[i].id)==0)
        {
            printf("\n%d %3s %-20s %-20s %5d", c ,liststudent[i].id, liststudent[i].name, liststudent[i].course, liststudent[i].yearjoin);
            c++;
        }
    }
}
