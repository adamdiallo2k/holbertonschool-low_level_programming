#include <stdio.h>
#include <stdlib.h>
/**
* _strcmp - Entrypoint
* Descritption: 'program to compare differences betweet 2 string''
* Return: Always 0.
* @s1: char parameter
* @s2: char parameter
*/
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] != '\0')
	{

		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);

		}
	count++;
	}
	if (s1[count] - s2[count] == '0')
	{
		return (0);
	}
}
