#include "main.h"
/**
* _strlen_recursion - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
*/



int _strlen_recursion(char *s)
{



if (s[0] == '\0')
{
	return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}

}
