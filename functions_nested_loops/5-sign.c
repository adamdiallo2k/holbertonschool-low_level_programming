#include "main.h"

/**
* print_sign - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @n: int parameter
*/

int print_sign(int n)
{
int zero = 0;
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (zero);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}

return(0);
}
