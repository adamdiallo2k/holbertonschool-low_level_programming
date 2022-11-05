#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
* sum_them_all - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @n: unsigned int parameter
*/


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int s = 0;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	/* for all unnamed integer, do an addition */
	while (s < n)
	{
		/* Extraction of the next integer */
		sum += (int) va_arg(parametersInfos, int);
		s++;
	}
	/* Release va_list resources */
	va_end(parametersInfos);
	return (sum);
}
