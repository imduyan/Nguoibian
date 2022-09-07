#include <stdio.h>
#include <stdlib.h>

int main()
{                  // program check letter is vowel or consonant:
    system("cls"); // clear screen

    char kt;

    printf("Enter a character:");
    kt = getchar();

    if ((kt >= 'a' && kt <= 'z') or (kt >= 'A' && kt <= 'Z'))
    { // character is a to z AND A to Z

        /*switch (kt){
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
        case 'U':
        case 'E':
        case 'A':
        case 'I':
        case 'O':
            printf("%c is a vowel", kt);
            break;
        default:
            printf("%c is a consonant", kt);
            break;
        }*/
        if ((kt == 'a') || (kt == 'i') || (kt == 'e') || (kt == 'o') || (kt == 'u') || (kt == 'A') || (kt == 'I') || (kt == 'E') || (kt == 'U') || (kt == 'O'))
        {
            printf("%c is a vowel", kt);
        }
        else
        {
            printf("%c is a consonant", kt);
        }
    }
    else
    { // character is not a to z AND A to Z
        printf("%c is not a alphanumeric character", kt);
    }
}