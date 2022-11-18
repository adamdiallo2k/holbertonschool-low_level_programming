#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* power - Entry point
* Description: 'converts a binary number to an unsigned int..'
* Return: int
* @base: const charb
* @a: unsigned int a
*/

int power(unsigned int base, unsigned int a)
{
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return (1);
}

/**
* binary_to_uint - Entry point
* Description: 'converts a binary number to an unsigned int..'
* Return: int
* @b: const charb
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index;
	int i;
	unsigned int pow;
	unsigned int number;

	if (!b)
		return (0);
	for (i = 0, index = strlen(b) - 1; i <= index; i++)
	{
		number = b[i] - '0';
		if (number == 0 || number == 1)
		{
			pow = (unsigned int) power(2, index - i);
			result +=  (number * pow);
		}
		else
			return (0);
	}
	return (result);
}
