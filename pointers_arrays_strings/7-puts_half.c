#include "main.h"
/**
* puts_half - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @str: char parameter
*/
void puts_half(char *str)
{

	int count = 0;
	int n;

	while (str[count] != '\0')
	{
	count++;
	}
	if (count % 2 != 0)
	{
	for (n = (count - 1) / 2 ; n <= (count - 1) ; n++)
        {
        _putchar(str[n]);
        }
	}
	else
	{
	
	for (n = (count) / 2 ; n <= (count - 1) ; n++)
	{
	_putchar(str[n]);
	}
	}
	_putchar('\n');
}
