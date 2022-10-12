#include <stdio.h>
#include <stdlib.h>
/**
* _strncpy - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @src: char parameter
* @dest : char parameter
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;

	while (src[count] != '\0')
	{
	count++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}

