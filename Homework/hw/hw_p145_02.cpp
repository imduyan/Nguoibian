// program to show computer's capabilities
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls"); // clear screen

    char character; // declare

    printf("Enter a character [a-z]:");
    character = getchar();
    fflush(stdin); // clear buffer

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) // character in a-z and A-Z
    {
        switch (character)
        {
        case 'A':
        case 'a':
            printf(">> Ada");
            break;
        case 'B':
        case 'b':
            printf(">> Basic");
            break;
        case 'C':
        case 'c':
            printf(">> COBOL");
            break;
        case 'd':
        case 'D':
            printf(">> dBASE III");
            break;
        case 'p':
        case 'P':
            printf(">> Pascal");
            break;
        case 'F':
        case 'f':
            printf(">> Fortran");
            break;
        case 'v':
        case 'V':
            printf(">> Visual C++");
            break;

        default:
            printf("Available!");
            break;
        }
    }
    else
    {
        printf("Please enter again.");
    }
}