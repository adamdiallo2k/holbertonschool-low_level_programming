#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Entry point
* Description: 'print struct dog'
* Return: nothing
* @d: dog struct parameter
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s", d->name);
		printf("\n");
		printf("Age: %f", d->age);
		printf("\n");
		printf("Owner: %s", d->owner);
		printf("\n");
	}
}
