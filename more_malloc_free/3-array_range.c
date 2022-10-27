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
	int maxv = max;
	int minv = min;

	if (min > max)
		return (NULL);

	for (i = minv; i < maxv; i++)
	{
		number++;
	}

	p = malloc(number);

	for (y = 0; minv < maxv; minv++)
		p[y] = minv;

	return (p);
}

