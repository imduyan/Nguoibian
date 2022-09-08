//program show in plural name
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    
    char *nameAnimal = (char*) malloc(50*sizeof(char));
	char *nameBird = (char*) malloc(50*sizeof(char));	

	printf("Enter name of animal: ");
	gets(nameAnimal);
	printf("Enter name of animal: ");
	gets(nameBird);

	strcat(nameAnimal,"s");
	strcat(nameBird,"s");

	printf("\nNames in plural are: %s, %s\n",nameAnimal,nameBird);

	free(nameAnimal);
	free(nameBird);

}