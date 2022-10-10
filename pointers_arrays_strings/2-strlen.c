#include "main.h"
/**
* strlen - Entrypoint
* Descritption: 'program to '
* Return: Always 0.
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
