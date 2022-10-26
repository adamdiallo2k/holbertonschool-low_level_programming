#include <stdlib.h>
#include <stdio.h>


/**
* str_concat - Entry point
* Description: 'Write a function that returns a pointer'
* Return: s3
* @s1: char parameter
* @s2: char parameter
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *s3;
	int size = 0;
	int y = 0;
	int count = 0;
	int count2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s2[count] != '\0')
	{
		count++;
	}

	while (s1[count2] != '\0')
	{
		count2++;
	}

	size = count + count2;
	s3 = malloc(sizeof(char) * size + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (y = 0; s2[y] != '\0'; y++)
	{
		s3[i] = s2[y];
		i++;
	}
	s3[i] = '\0';

	return (s3);
}

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
	unsigned int count = 0;
	char *s3;
	char *s4;
	unsigned int count2 = 0;
	unsigned int size;
	unsigned int size2;
	unsigned int i = 0;

	while (s1[count] != '\0')
	{
	count++;
	}

	while (s2[count2] != '\0')
		count2++;


	if (n >= count2)
		n = count2;

	size2 = n + count;
	size2 = size + count2;

	s3 = malloc(sizeof(char) * n + 1);
	s4 = malloc(sizeof(char) * size2 + 1);

	for (i = 0; i < n; i++)
		s3[i] = s2[i];

	s4 = str_concat(s1, s3);

	return (s4);
}
