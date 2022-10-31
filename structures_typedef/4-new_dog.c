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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1;
	int len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len1 = strlen(name) + 1;
	len2 = strlen(owner) + 1;
	d->name = malloc(sizeof(char) * len1);
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(sizeof(char) * len1);
	if (d->owner == NULL)
		return (NULL);
	d->name = name;
	d->owner = owner;
	d->age = age;
}
