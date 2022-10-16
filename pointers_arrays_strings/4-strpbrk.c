#include <stdio.h>
#include <stdlib.h>
/**
* _strpbrk - Entrypoint
* Descritption: 'program to print a string'
* Return: Always 0.
* @s: char parameter
* @accept: char parameter
*/



char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (y = 0; accept[y] != '\0' ; y++)
		{
			if (accept[y] == s[i])
			{
			char *b = &s[i];

			return (b);
			}
		}


	}


	return (0);
}

