#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

int main(void)
{
char x,y;

for (x = '0'; x <= '9' ; x++)
{
	putchar(x);
}

for (y = 'a'; y <= 'f'; y++)
{
	putchar(y);
}
	putchar('\n');

return (0);
}
