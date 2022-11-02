#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - Entry pointddscxds
* Description: 'print a name'
* Return: nothing
*/


void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
	void (*d)(char*);
	d = f;
	d(name);
	}
}
