#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Entry point
* Description: 'initialize a variable of type struct dog'
* Return: nothing
* @d: dog struct parameter
* @name: char parameter
* @age: float parameter
* @owner: char parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}

