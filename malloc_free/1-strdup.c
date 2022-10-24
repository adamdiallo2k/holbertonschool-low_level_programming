#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - Entry point
* Description: 'Return the lenght of a pointer'
* Return: count
* @s: char parameter
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
{
	count++;
}
	return (count);
}

/**
* _strdup - Entry point
* Description: 'Write a function that returns a pointer'
* Return: st2
* @str: char parameter
*/
char *_strdup(char *str)
{
	int i;
	char *st2;
	int size = _strlen(str);

	if (size > 0)
	{
		st2 = malloc(sizeof(char) * size);

	if (st2 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		st2[i] = str[i];
	}
	}
	else
	{
	return (NULL);
	}

	return (st2);
}

