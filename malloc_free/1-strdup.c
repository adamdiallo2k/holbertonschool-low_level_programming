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
	int i = 0;
	char *st2;
	int size = 0;



	while (str[size] != '\0')
	{
		size++;
	}



	st2 = malloc(sizeof(char) * size + 1);



	for (i = 0; i < size; i++)
		st2[i] = str[i];
	st2[i] = '\0';



	return (st2);
}

