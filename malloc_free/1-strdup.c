#include <stdlib.h>
#include <stdio.h>


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
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		size++;
	}



	st2 = malloc(sizeof(char) * (size + 1));

	if (st2 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		st2[i] = str[i];




	return (st2);
}

