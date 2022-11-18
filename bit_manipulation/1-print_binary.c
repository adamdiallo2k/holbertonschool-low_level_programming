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

unsigned long int power(unsigned long int base, unsigned long int a)
{
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return (1);
}

void printDigit(unsigned long int N)
{
    int r;

   
    if (N == 0) {
        return;
    }
	
    r = N % 10;

    printDigit(N / 10);

    _putchar(r + '0');
}
/**
* binary_to_uint - Entry point
* Description: 'converts a binary number to an unsigned int..'
* Return: int
* @n: const charb
*/

void print_binary(unsigned long int n)
{
	unsigned long result = 0;
	unsigned long int i = 0;
	if (n == 0)
	{
	
	}
	while (n != 0)
	{
	if (power(2,i) > n)
        {
		result += power(10,i - 1);
		n = n - power(2,i - 1);
		i = 0;
	}
	i++;
	}
	if (result == 0)
		_putchar(0 + '0');
	else
		printDigit(result);

}
