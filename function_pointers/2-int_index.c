#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Entry pointddscxds
* Description: 'print a name'
* Return: nothing
* @array: int pointer parameter
* @size: size_t parameter
* @cmp:int function pointer parameter
*/


int int_index(int *array, int size, int (*cmp)(int))
{

	if (array != NULL && size >= 0 && cmp != NULL)
	{

		int i;
		int (*d)(int);
			d = cmp;

		for (i = 0; i < size; i++)
		{
			if (d(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
