#include <stdio.h>
#include <stdlib.h>


char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int y;
	unsigned int reponse = 0;
	char b[20];
	char *b1;; 
	b1 = b;
	unsigned int z;
	while (needle[i] != '\0')
	{
		reponse = 0;

		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[i] == haystack[y])
			{
			
			b1[z] = haystack[i];
			reponse = 1;
			return (needle);
			}
			else 
			{

			return (0);
			break;
			}
			
		}
		
		

		i++;

	}
	return (0);
}
