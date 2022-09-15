//program manage student list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define struct date include day, month, year
struct DATE
{
    int dd, mm, yy;
};

//Define struct [STUDENT] include [id], [name], [date of birth], [mark]
struct STUDENT
{
    char id[11];
    char name[31];
    struct DATE birthday;
    int mark;
};

//creat new name for struct student: SinhVien
typedef struct STUDENT SinhVien; //SinhVien abc can replace struct STUDENT abc

void fn_student();

int main(){
    system("cls");

    fn_student();
}

//student list management function
void fn_student(){
    int n;
    while (1==1)
    {
        printf("Enter the number of student for managing[2-20]:");
        scanf("%d", &n);
        if (n>=2 && n<=20)
        {
            break;
        }
    }
    SinhVien list[n];

    //loop accept n student
    printf("\nEnter student's information:\n"); fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        
        printf("Enter student No.%d", i+1);
        printf("\nEnter ID:"); scanf("%s", &list[i].id); fflush(stdin);
        printf("Enter name:"); scanf("%s", &list[i].name); fflush(stdin);
        printf("Enter date of birth:");
        printf("\nEnter day:"); scanf("%d", &list[i].birthday.dd);
        printf("Enter month:"); scanf("%d", &list[i].birthday.mm);
        printf("Enter year:"); scanf("%d", &list[i].birthday.yy);
        printf("Enter mark:"); scanf("%d", &list[i].mark);
    }

    //print student list
    printf("\nSTUDENT LIST:");
    printf("\n%4s %-20s %-15s %3s", "ID", "NAME","BIRTH OF DAY", "MARK");
    for (int i = 0; i < n; i++)
    {
        printf("\n%4s %-20s %-2d-%-2d-%-11d %3d", list[i].id, list[i].name,list[i].birthday.dd,list[i].birthday.mm,list[i].birthday.yy, list[i].mark);
    }
    
    /*  //student sorting list by name
    fflush(stdin);
    struct STUDENT temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            if (strcmp(list[i].name, list[j].name)>0)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    //print student list sort by name
    printf("\nSTUDENT LIST SORT BY NAME:");
    printf("\n%4s %-20s %-15s %3s", "ID", "NAME","BIRTH OF DAY", "MARK");
    for (int i = 0; i < n; i++)
    {
        printf("\n%4s %-20s %-2d-%-2d-%-11d %3d", list[i].id, list[i].name,list[i].birthday.dd,list[i].birthday.mm,list[i].birthday.yy, list[i].mark);
    }*/
    
    /*  //find by id
    fflush(stdin);
    char fn[11];
    printf("\nEnter ID to find:");
    gets(fn);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(list[i].id, fn)==0)
        {
            printf("Id: %s", list[i].id);
            printf("Name: %s", list[i].name);
            printf("Birthday: %2d-%2d-%2d", list[i].birthday.dd, list[i].birthday.mm, list[i].birthday.yy);
            count++;
            printf("Mark: %d", list[i].mark);
            break;
        }
    if (count==0)
    {
        printf("Not find!!!");
    }
    }*/
    
    /*  //find by name
    fflush(stdin);
    int countn=0;
    char fname[31];
    printf("\nEnter name to find:");
    gets(fname);
    for (int i = 0; i < n; i++)
    {
        if (strstr(list[i].name,fname))
        {
            countn++;
            printf("Found name:");
            printf("\n%d. %s", countn, list[i].name);
        }
    }
    if (countn==0)
    {
        printf("can't find!!");
    }*/

}