#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - Entry pointddscxds
* Description: 'print a name'
* Return: nothing
* @name: function pointer parameter
* @f: char parameter
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		int z = (int) size;
		int i;
		void (*d)(int);
			d = action;

		for (i = 0; i < z; i++)
			d(array[i]);	
	}
}
