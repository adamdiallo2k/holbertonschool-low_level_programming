#include "main.h"

/**
* print_last_digit - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
* @n: int parameter
*/
int _abs(int c)
{


if (c < 0)
{
        c = c * -1;
        return (c);
}
else
{
        return (c);
}
return (0);

}


int print_last_digit(int n)
{

        int lastdigit = _abs(n) % 10;
	_putchar(lastdigit);
        return(lastdigit);
}

