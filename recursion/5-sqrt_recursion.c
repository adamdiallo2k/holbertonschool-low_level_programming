#include "main.h"
/**
*_pow_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @x: int parameter
* @i: int parameter
*/

int _pow_recursion(int x, int i)
{
	if (x == (i * i))
	return (i);

	else if (x > (i * i))
	return (_pow_recursion(x, i + 1));

	else if (x < (i * i))
	return (-1);

	return(0);
}

/**
*_sqrt_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @n: int parameter
*/
int _sqrt_recursion(int n)
{


	return (_pow_recursion(n, 0));
}
