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

	bitStatus = (1 << (int) index);

	*n |= bitStatus;

	if (index > 31)
		return (-1);

	return (bitStatus);
}
