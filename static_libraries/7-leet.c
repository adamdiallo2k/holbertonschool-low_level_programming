#include "main.h"

/**
 * leet - print an array of integers
 * @c: an array of char
 * Return: nothing.
 */
char *leet(char *c)
{

int i;
char s1[] = "AaeEoOtTlL";
char s2[] = "4433007711";
int j;
for (i = 0; c[i] != '\0'; i++)
{
	for (j = 0; s1[j] != '\0'; j++)
	if (s1[j] == c[i])
	{
	c[i] = s2[j];
	}
}
return (c);
}
