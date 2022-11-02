#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - Entry pointddscxds
* Description: 'print a name'
* Return: nothing
* @array: int pointer parameter
* @size: size_t parameter
* @action:void function parameter
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		int z = (int) size;
		int i;
		void (*d)(int);
			d = action;

		for (i = 0; i < z; i++)
			d(array[i]);
	}
}
