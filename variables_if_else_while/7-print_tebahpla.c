#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
/**
* main - Entry point
* Description: 'the program's description'
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
{
	putchar(tolower(x));
}
	putchar('\n');
	return (0);
}
