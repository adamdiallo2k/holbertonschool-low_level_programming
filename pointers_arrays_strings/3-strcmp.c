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
	int i = 0;
	int count2 = 0;

	while (s1[count] != '\0')
	{
	count++;
	}

	while (s2[count2] != '\0')
	{
	count2++;
	}
	if (count > count2)
	return (15);

	else if (count < count2)
	return (-15);

	else
	return (0);
}
