#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
* new_dog - Entry point
* Description: 'print struct dog'
* Return: nothing
* @name: dog struct parameter
* @age: dog struct parameter
* @owner: dog struct parameter
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
