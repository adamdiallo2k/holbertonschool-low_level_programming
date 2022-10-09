#include "main.h"
#include <stdio.h>
/**
* times_table - Entry pointddscxds
* Description: 'the program's description'
* Return: Always 0 (Success)
*/
void times_table(void)
{
int tablen;
int n;
int result;
for (tablen = 0 ; tablen <= 9 ; tablen++)
{
	for (n = 0; n < 10; n++)
	{
	result = tablen * n;
	printf("%d", result);
	if (n != 9)
	{
	printf(",  ");
	}
	}
	printf("\n");
}
}
