#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry pointddscxds
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 * @argc: int parameter
 * @argv: char parameter
 */

int main(int argc, char *argv[])
{
	int (*r)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "/") != 0 && strcmp(argv[2], "*")
			!= 0 && strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}


	r = get_op_func(argv[2]);
	printf("%d\n", r(atoi(argv[1]), atoi(argv[3])));

	return (0);

}
