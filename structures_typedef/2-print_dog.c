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
		printf("Name: %s", d->name);
		printf("\n");
		printf("Age: %f", d->age);
		printf("\n");
		printf("Owner: %s", d->owner);
		printf("\n");
	}
}
