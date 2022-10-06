#include "main.h"

/**
* print_last_digit - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @n: int parameter
*/



int print_last_digit(int n)
{
	int lastdigit = 0;
	int l;

	if (n < 0)
	{
	lastdigit = (( n % -10) * -1);
	l = lastdigit;
	lastdigit = lastdigit + '0';
	_putchar(lastdigit);
	return(l);

	}
	else
	{
        lastdigit = (n % 10);
	l = lastdigit;
	lastdigit = lastdigit + '0';
	_putchar(lastdigit);
	return(l);
	}
        
}

