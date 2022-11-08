#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
* print_chare - Entry point
* Description: 'return difference'
* Return: nothing
* @c: va_list parameter
*/

void print_chare(va_list c)
{
	char *r = va_arg(c, char *);

	if (r == NULL)
		r = "(nil)";
	
	printf("%s", r);
}

/**
* print_float - Entry point
* Description: 'return difference'
* Return: nothing
* @f: va_list parameter
*/
void print_float(va_list f)
{
	float p = va_arg(f, double);

	printf("%f", p);
}

/**
* print_char - Entry point
* Description: 'return product'
* Return: nothing
* @c: va_list parameter
*/
void print_char(va_list c)
{
	int p = va_arg(c, int);

	printf("%c", p);
}

/**
* print_int - Entry point
* Description: 'return division'
* Return: nothing
* @i: int parameter
*/
void print_int(va_list i)
{
	int p = va_arg(i, int);

	printf("%i", p);
}

/**
  * print_all - Entry point
  * Description: 'return division'
  * Return: nothing
  * @format: const parameter
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
			if (format != NULL && *fut[y].fu ==  format[i])
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



