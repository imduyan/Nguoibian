//structure lab 1-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// declare struct inventory
struct Length
{
    float yard, foot, inch;
};  typedef struct Length len;

struct date_of_joining
{
    int dd, mm, yy;
};

struct detail_employee
{
    char id[3], name[26];
    int salary, real_salary;
    struct date_of_joining doj;
}; typedef struct detail_employee de;


void lengths();
void templ();
void detail_e();

int main()
{
    system("cls");

    int choice;

    while (1 == 1)
    {
        templ();
        printf("\nPlz enter your choice [1-3]:");
        scanf("%d", &choice);
        fflush(stdin);
        if (choice == 1)
        {
            lengths();
        }
        else if (choice == 2)
        {
            detail_e();
        }

        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            printf("Invalid!!!!");
        }
        printf("\nPress any key:");
        getch();
    }
}

void templ()
{
    system("cls");
    printf(" -- MENU --");
    printf("\n1. Exercise 1.");
    printf("\n2. Exercise 2");
    printf("\n3. Exit.");
    printf("\n------------------");
}

void lengths()
{
    len ds[5];

    printf("Enter 5 lengths by inch:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Length %d: ", i + 1);
        scanf("%f", &ds[i].inch);
        fflush(stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        ds[i].yard = (ds[i].inch / 36);
        ds[i].foot = (ds[i].inch * 0.0833);
    }

    len tam;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (ds[i].inch < ds[j].inch)
            {
                tam = ds[i];
                ds[i]= ds[j];
                ds[j] = tam;
            }
        }
    }

    printf(">>>>Length sorted by descending<<<<\n");
    printf("%2s %5s %5s %5s", "No", "Inch", "Foot", "Yard");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%2d %-5.1f %-5.1f %-5.1f", i+1, ds[i].inch, ds[i].foot, ds[i].yard );
    }
    
}

void detail_e(){
    int n;
    printf("Enter the number of employee:"); scanf("%d", &n); 
    de list[n];

    printf(">>>Enter employee's information.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee %d:\n", i+1);
        printf("Enter ID:"); fflush(stdin); gets(list[i].id);
        printf("Enter name:"); gets(list[i].name);
        printf("Enter salary:"); scanf("%d", &list[i].salary);
        printf("Enter date of joining:\n"); 
        printf("Day:"); scanf("%d", &list[i].doj.dd);
        printf("Month:"); scanf("%d", &list[i].doj.mm);
        printf("Year:"); scanf("%d", &list[i].doj.yy);
    }

    for (int i = 0; i < n; i++)
    {
        if (list[i].salary<=2000)
        {
            list[i].real_salary=((list[i].salary*115)/100);
        }
        else if (list[i].salary>2000&&list[i].salary<=5000)
        {
            list[i].real_salary=((list[i].salary*110)/100);
        }
    }

    int count_year=0;
    for (int i = 0; i < n; i++)
    {
        if (list[i].doj.yy<2012)
        {
            if (list[i].doj.mm<10)
            {
                count_year++;
                printf("\nID: %s, Name: %s, Salary: %d(dollar), Date of joining: %d-%d-%d", list[i].id, list[i].name, list[i].real_salary, list[i].doj.dd, list[i].doj.mm, list[i].doj.yy);
            }
        }
    }
    printf("\nThere is %d employee complete 10 years with cpn.", count_year);
    
}
