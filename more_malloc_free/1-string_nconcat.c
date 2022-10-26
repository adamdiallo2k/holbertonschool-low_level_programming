#include <stdlib.h>
#include <stdio.h>


/**
* string_nconcat - Entry point
* Description: 'Write a function that returns a pointer'
* Return: s3
* @s1: char *s1
* @s2: char *s2
* @n: int parameter
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *s3;
	unsigned int count2 = 0;
	unsigned int i = 0;
	unsigned int y = 0;
	 unsigned int count = 0;

	while (s2[count2] != '\0')
		count2++;

	while (s1[count] != '\0')
		count++;

	if (n >= count2)
		n = count2;



	s3 = malloc(sizeof(char) * (n + count + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];


	for (y = 0; y < n; y++)
	{
		s3[i] = s2[y];
		i++;
	}


	return (s3);
}
