#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_chare - Entry point
* Description: 'print a name'
* Return: nothing
* @c: va_list parameter
*/


void print_chare(va_list c)
{
	char *r = va_arg(c, char *);

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
