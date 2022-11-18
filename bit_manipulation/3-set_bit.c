#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* set_bit- Entry point
* Description: 'sets the value of a bit to 1 at a given index.'
* Return: int
* @n: unsigned long int
* @index: unsigned int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitStatus;

	if (index >= 2000)
		return (-1);
	bitStatus = (1 << (int) index);

	*n |= bitStatus;


	return (1);
}
