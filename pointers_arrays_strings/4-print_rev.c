#include "main.h"
/**
* print_rev - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
*/
void print_rev(char *s)
{
	int count = 0;
	int lenght;

	while (s[count] != '\0')
	{
	count++;
	}

	for (lenght = count - 1; lenght >= 0; lenght--)
	{
	_putchar(s[lenght]);
	}
	_putchar('\n');
}
