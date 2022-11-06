#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
* print_strings- Entry point
* Description: 'returns the sum of all its parameters.'
* Return: nothing
* @separator: char const parameter
* @n: const unsigned int n parameter
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s = 0;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	/* for all unnamed integer, do an addition */

	while (s < n)
	{
		/* Extraction of the next integer */

		char *t =  va_arg(parametersInfos, char *);

		if (t == NULL)
			printf("(nil");
		else
			printf("%s", t);

		s++;
		if (s != n && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	/* Release va_list resources */
	va_end(parametersInfos);
}
