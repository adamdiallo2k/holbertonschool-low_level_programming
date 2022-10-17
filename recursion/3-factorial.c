#include "main.h"
/**
* factorial - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @n: char parameter
*/



int factorial(int n)
{


if (n == 1)
{
	return (1);
}
else if (n < 0)
{
return (-1);
}

else
{
return (n * factorial(n  - 1));
}


}

