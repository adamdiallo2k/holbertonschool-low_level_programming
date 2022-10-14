#include <stdio.h>
#include <stdlib.h>
/**
* _memset - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
* @b : char parameter
* @n : int paramameter
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		s[i] = b;
		i++;
	}
	printf("\n");

	return (s);
}

