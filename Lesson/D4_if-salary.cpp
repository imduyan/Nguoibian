#include <stdio.h>
#include <stdlib.h>

int main(){//calculate salary in last of month
    system("cls");//clear screen

    int basic_salary, Salary; //declare basic and actual salary
    char A; //declare level of salary

    printf("Enter the basic salary:");
    scanf("%d", &basic_salary);
    
    fflush(stdin); //clear keyboard buffer
    printf("Enter the level of salary (A or B or C):");
    scanf("%c", &A);
    

    if (A=='A' || A=='a'){
      Salary=basic_salary+100; //the first level of salary
    }
    else if (A=='B' || A=='b')
    {
      Salary=basic_salary+400; //the second level of salary
    }
    else if (A=='B' || A=='b')
    {
      Salary=basic_salary+1000; //the third level of salary
    }
    else{
      Salary=basic_salary; //invalid 
    }
    printf(">>The salary is: %d", Salary);
}
