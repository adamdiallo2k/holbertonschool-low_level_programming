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

	int x,y;

for (x = 'a'; x <= 'z'; x++)
{

	putchar(x);

	if (x == 'z')
	{
		for (y = 'a'; y <= 'z'; y++)
	{
		putchar(toupper(y));
	}

}
}

	putchar('\n');

	return (0);
}
