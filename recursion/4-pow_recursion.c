#include "main.h"
/**
* _pow_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @y: int parameter
* @x: int parameter
*/



int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
	result = 1;

	else if (y < 0)
	result = -1;

	else
	result = x * _pow_recursion(x, y - 1);

	return (result);
}
