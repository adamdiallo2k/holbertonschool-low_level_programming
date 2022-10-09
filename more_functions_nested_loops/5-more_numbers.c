#include "main.h"
/**
* print_most_numbers - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
int i;
int firstDigit;
int y;
int lastdigit;
int x;
for (i = 0; i <= 9; i++)
{
	for (y = 0; y <= 14; y++)
	{
	
	lastdigit = y;
	x = y;
	while (x >= 10)
	{
	x = x / 10;
	}
	firstDigit = x;
	_putchar(firstDigit + '0');
	if(y > 9)
	{
	_putchar((lastdigit % 10) + '0');
	}
	
	
	
	

	}
	_putchar('\n');
}
}
