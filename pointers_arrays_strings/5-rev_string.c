#include "main.h"
/**
* rev_string - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @s: char parameter
*/
void rev_string(char *s)
{
	int count = 0;
	int lenght;
	char d[20];

	while (s[count] != '\0')
	{
	d[count] = s[count];
	count++;
	}
	int count2 = 0;
	for (lenght = count - 1; lenght >= 0; lenght--)
	{
	s[count2] = d[lenght];
	count2++;
	}

}

