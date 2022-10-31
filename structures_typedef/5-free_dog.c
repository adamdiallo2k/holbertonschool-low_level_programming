#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
* free_dog - Entry point
* Description: 'print struct dog'
* Return: nothing
* @d: dog struct parameter
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
