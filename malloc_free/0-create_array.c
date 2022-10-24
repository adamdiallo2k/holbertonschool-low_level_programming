#include <stdlib.h>
#include <stdio.h>
/**
* create_array - Entry point
* Description: 'creates an array of chars'
* Return: str
* @size: unsigned int parameter
* @c: char parameter
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
