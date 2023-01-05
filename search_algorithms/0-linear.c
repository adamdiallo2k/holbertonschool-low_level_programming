#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * Description: 'Performs a linear search
 * for a given value in an array of integers
 * and returns the index of the first occurrence of the value in the array,
 * or -1 if the value was not found.'
 * Return: The index of the first
 * occurrence of the value in the array, or -1 if
 * the value was not found.
 * @array: int parameter
 * @size: size parameter
 * @value: int value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
