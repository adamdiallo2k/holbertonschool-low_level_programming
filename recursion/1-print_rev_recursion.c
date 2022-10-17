#include "main.h"
/**
* _print_rev_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
*/



void _print_rev_recursion(char *s)
{


if (s[0] != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}


}

