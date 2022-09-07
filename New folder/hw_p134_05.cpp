#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//clear screen.

    int MARK;
    char GRADE;

    printf("Enter student's mark[0-100]:");
    scanf("%d", &MARK);

    if (MARK>=0 && MARK<=100)
    {
        if(MARK>75){
            GRADE = 'A';
        }
        else if(MARK>=61 && MARK<=75){
            GRADE = 'B';
        }
        else if(MARK>=46 && MARK<=60){
            GRADE = 'C';
        }
        else if(MARK>=36 && MARK<=45){
            GRADE = 'D';
        }
        else{
            GRADE = 'E';
        }
    }
    printf("The grade of this student is: %c", GRADE);
    
}