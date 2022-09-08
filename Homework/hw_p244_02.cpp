//program to  add two matrices using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    
    int str1[9]={1,2,3,4,5,6,7,8,9}, str2[9]={9,8,7,6,5,4,3,2,1}, str3[18];
	int *p1=str1, *p2=str2, *p3=str3;
	
	for (int i = 0; i < 9; i++)
	{
		p3[i]=(p1[i]+p2[i]);
	}

	int count=0;
	printf("Matrix 1:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %2d ", p1[count]);
			count++;
		}
		printf("\n");
	}

	count=0;
	printf("Matrix 2:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %2d ", p2[count]);
			count++;
		}
		printf("\n");
	}

	count=0;
	printf("Sum of 2 matrixes:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %2d ", p3[count]);
			count++;
		}
		printf("\n");
	}
}