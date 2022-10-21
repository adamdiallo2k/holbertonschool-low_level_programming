#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @argc: int parameter
* @argv: char parameter
*/

int main(int argc, char *argv[])
{
int i;
int somme;
int j = 0;
int z;
for (i = 1; i < argc; i++)
	{

	for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		{
		}
		}
	}

	for (i = 1; i < argc; i++)
	{
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}





