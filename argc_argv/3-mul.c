#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @argc: int parameter
* @argv: char parameter
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}

	else
	{
	printf("Error\n");
	return (1);
	}

	return (0);

}
