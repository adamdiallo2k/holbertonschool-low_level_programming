#include "main.h"
/**
* _puts - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @str: char parameter
*/
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
	_putchar(str[count]);
	count++;
	}
	_putchar('\n');
}
