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
int x;

for (x = '0'; x <= '9' ; x++)
{
	putchar(x);
	if (x != '9')
	{
	putchar(',');
	putchar(' ');
	}

}
	putchar('\n');
return (0);
}
