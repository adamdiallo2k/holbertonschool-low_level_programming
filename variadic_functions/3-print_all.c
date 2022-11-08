#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_all - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: nothing
* @format: char const parameter
*/


void print_all(const char * const format, ...)
{

	char *sep = "";
	int i = 0;
	int y = 0;
	fu_t fut[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_chare},
		{NULL, NULL}
	};
	va_list parametersInfos;

	va_start(parametersInfos, format);

	while (format[i] != '\0')
	{
		while (fut[y].fu != NULL)
		{
			if (*fut[y].fu ==  format[i])
			{
				printf("%s", sep);
				fut[y].f(parametersInfos);
				sep = ", ";
			}
			y++;

		}
		y = 0;
		i++;
	}
	printf("\n");
}



