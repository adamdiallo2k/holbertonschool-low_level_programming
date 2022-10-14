#include "main.h"

/**
 * leet - print an array of integers
 * @c: an array of char
 * Return: nothing.
 */
char *leet(char *c)
{

int i;
char s[] = "3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.\n";

for (i = 0; c[i] != '\0'; i++)
{
	if (c[i] == 'a' || c[i] == 'A' || c[i] == 'e'
	|| c[i] == 'E' || c[i] == 'o' || c[i] == '0'
	|| c[i] == 't' || c[i] == 'T' || c[i] == 'l'
	|| c[i] == 'L')
	{
	c[i] = s[i];
	}

}
return (c);
}
