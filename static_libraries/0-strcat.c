/**
* _strcat - Entrypoint
* Descritption: 'program to print a string''
* Return: Always 0.
* @src: char parameter
* @dest : char parameter
*/
char *_strcat(char *dest, char *src)
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

	for (i = count - 1; i <= (count2 - 1 + (count - 1 )); i++)
	{

	
	dest[i] = src[indicesrc];
	if (indicesrc < count)
	{
	indicesrc++;
	}
	}
	
	return (dest);
}
