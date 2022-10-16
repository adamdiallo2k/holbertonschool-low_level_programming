#include <stdio.h>
#include <stdlib.h>
/**
* _strspn - Entrypoint
* Descritption: 'program to print a string'
* Return: Always 0.
* @s: char parameter
* @accept: char parameter
*/



unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int y = 0;
	unsigned int reponse = 1;
	unsigned int lenghtP = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		reponse = 0;
		for (y = 0; accept[y] != '\0' ; y++)
		{
			if (accept[y] == s[i])
			{
			lenghtP++;
			reponse = 1;
			}
		}

		if (reponse == 0)
			break;




	}


	return (lenghtP);
}
