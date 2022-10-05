#include "main.h"

/**
* print_sign - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @n: int parameter
*/

int print_sign(int n)
{

if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(0);
	return (0);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);

}


}
