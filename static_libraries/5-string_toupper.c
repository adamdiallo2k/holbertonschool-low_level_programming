#include "main.h"
#include <stdio.h>
/**
 * string_toupper - print an array of integers
 * @c: an array of char
 * Return: nothing.
 */
char *string_toupper(char *c)
{

int i = 0;



while (c[i] != '\0')
{
	if (c[i] >= 'a' && c[i] <= 'z')
	{
	c[i] = c[i] - 32;
	}
	i++;
}


return (c);
}
