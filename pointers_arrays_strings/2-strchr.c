#include <stdio.h>
#include <stdlib.h>
/**
* _strchr - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
* @c : char parameter
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;
	int indice2 = 0;

	while (s[i] != '\0')
	{

		if (s[i] == c)
		{
		char *b = &s[i];

		return (b);
		}
		i++;
	}
}
