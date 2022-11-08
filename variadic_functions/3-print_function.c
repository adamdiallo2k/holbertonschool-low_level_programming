#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* print_chare - Entry point
* Description: 'print a name'
* Return: nothing
* @c: va_list parameter
*/


void print_chare(va_list c)
{
	char *r = var_arg(p, char *)

	printf("%d", r);
}

/**
* print_float - Entry point
* Description: 'return difference'
* Return: nothing
* @f: va_list parameter
*/
void print_float(va_list f)
{
	float p = va_arg(f, float);

	printf("%f", p);
}

/**
* print_char - Entry point
* Description: 'return product'
* Return: nothing
* @c: va_list parameter
*/
int print_char(va_list c)
{
	int p = var_arg(c, int)

	printf("%c", p);
}

/**
* print_int - Entry point
* Description: 'return division'
* Return: nothing
* @i: int parameter
*/
int print_int(int i)
{
	int p = var_arg(i, int)

	printf("%i", p);
}
