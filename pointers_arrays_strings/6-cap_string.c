#include "main.h"
#include <stdio.h>
/**
 * cap_string - print an array of integers
 * @c: an array of char
 * Return: nothing.
 */
char *cap_string(char *c)
{
int count = 0;


if (c[count] >= 'a' && c[count] <= 'z')
{
	c[count] = c[count] - 32;
}

while (c[count] != '\0')
{



	if ((c[count - 1] == ' ' || c[count - 1] == '\n' || c[count - 1] == '.')   &&
	(c[count] >= 'a' && c[count] <= 'z'))

	{
		c[count] = c[count] - 32;
	}



	count++;
	}

return (c);
}
