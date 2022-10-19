#include "main.h"
#include <stdio.h>
/**
* print_array - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @a: int parameter
* @n: int parameter
*/
void print_array(int *a, int n)
{

	int count = 0;
	int i;


	while (a[count] != '\0')
	{
	count++;
	}

	for (i = 0 ; i <= (n - 1); i++)
	{
	printf("%d", a[i]);

	if (i < (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}

