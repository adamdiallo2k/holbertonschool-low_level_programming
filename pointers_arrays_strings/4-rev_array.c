#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: number of characters
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{

int count = 0;
int i;
i = n - 1;

while (i >= 0)
{

if (i != (n - 1))
	{
	printf(", ");
	}

printf("%d", a[i]);
i--;
}

printf("\n");
}
