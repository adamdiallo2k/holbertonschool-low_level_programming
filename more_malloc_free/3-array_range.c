#include <stdlib.h>
#include <stdio.h>


/**
* array_range - Entry point
* Description: 'Write a function that returns a pointer'
* Return: int
* @min: int parameter
* @max: int parameter
*/

int *array_range(int min, int max)
{
	int i;
	int number = 0;
	int *p;
	int y;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		number++;
	}

	p = malloc(sizeof(int) * number);

	if (p == NULL)
		return (NULL);


	for (y = min, i = 0; y <= max; y++, i++)
		p[i] = y;


	return (p);
}

