#include <stdio.h>
#include <stdlib.h>
/**
* _strstr - Entrypoint
* Descritption: 'program to print a string'
* Return: Always 0.
* @haystack: char parameter
* @needle: char parameter
*/



char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int y = 0;
	char *b = NULL;

	while (i == 0)
	{
		reponse = 0;

		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] == haystack[i])
			{
			b = &haystack[0];
			return (b);
			}

		}
		return (needle);

		i++;
	}


	return (needle);
}

