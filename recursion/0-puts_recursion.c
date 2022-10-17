#include "main.h"
/**
* _puts_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
*/
void _puts_recursion(char *s)
{

if (s[0] != '\0')
{
	_putchar(s[0]);
	_puts_recursion(s + 1);

}
else
{
_putchar('\n');
}

}
