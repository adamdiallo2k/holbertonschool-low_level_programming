#include <stdio.h>
#include <stdlib.h>
/**
* _strcpy - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @src: char parameter
* @dest : char parameter
*/
char *_strcpy(char *dest, char *src)
{

	int i;


	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];


	dest[i] = '\0';

	return (dest);
}
