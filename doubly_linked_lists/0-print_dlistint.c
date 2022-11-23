#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - Entry point
* Description: ' prints all the elements of a dlistint_t list.'
* Return: i
* @h: dlistint_t  parameter
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
