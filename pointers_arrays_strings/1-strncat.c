/**
* _strncat - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @src: char parameter
* @dest: char parameter
* @n: char parameter
*/
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;
	int count2 = 0;
	int indicesrc = 0;

	while (src[count] != '\0')
	{
	count++;
	}

	while (dest[count2] != '\0')
	{
	count2++;
	}

	for (i = count2; i <= (count2 + (n - 1)); i++)
	{

	dest[i] = src[indicesrc];

	indicesrc++;

	}

	return (dest);
}

