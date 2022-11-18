#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* get_bit- Entry point
* Description: 'returns the value of a bit at a given index'
* Return: int
* @n: unsigned long int
* @index: unsigned int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	bitStatus = (n >> index) & 1;

	return (bitStatus);
}
