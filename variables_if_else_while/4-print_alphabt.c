#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

int main(void)
{
char x;
char y;
for (x = 'a'; x <= 'z'; x++)
{
	if ((x == 'q') | (x == 'e'))
	{
	y++;
	}
	else
	{
	putchar(x);
	}
}
	putchar('\n');

	return (0);
}
