#include "main.h"
/**
* puts2 - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @str: char parameter
*/
void puts2(char *str)
{

	int count = 0;

	while (str[count] != '\0')
	{
	if (count % 2 == 0)
	{
	_putchar(str[count]);
	}
	count++;
	}
	_putchar('\n');
}

