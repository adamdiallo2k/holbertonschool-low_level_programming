#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
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
int binary_search(int *array, size_t size, int value)
{

	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		mid = (low + high) / 2;

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
