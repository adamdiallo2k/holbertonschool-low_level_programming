#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Entry point
* Description: 'Write a function that returns a pointer'
* Return: s3
* @b: int parameter
*/

void *malloc_checked(unsigned int b)
{
	int *m;
	m = malloc(b);

	if (m == NULL)
		exit(98);
	
	return (m);	
}
