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


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s = 0;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	/* for all unnamed integer, do an addition */
	while (s < n)
	{
		/* Extraction of the next integer */
		printf("%d", va_arg(parametersInfos, int));
		s++;
		if (s != n)
			printf("%s", separator);
	}
	printf("\n");
	/* Release va_list resources */
	va_end(parametersInfos);
}
