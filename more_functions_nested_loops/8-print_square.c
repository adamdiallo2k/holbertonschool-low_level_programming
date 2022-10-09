#include "main.h"

/**
* print_square - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @size: int parameter
*/

void print_square(int size)
{
int i;
int y;
for (y = 0 ; y < size; y++)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
	_putchar(35);
}
_putchar('\n');
}
}
}

