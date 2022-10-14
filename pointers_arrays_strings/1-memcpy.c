#include <stdio.h>
#include <stdlib.h>
/**
* _memcpy - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @dest: char parameter
* @src : char parameter
* @n : int paramameter
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		dest[i] = src[i];
		i++;
	}


	return (dest);
}

