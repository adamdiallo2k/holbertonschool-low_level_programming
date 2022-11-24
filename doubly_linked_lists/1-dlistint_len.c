#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - Entry point
* Description: ' prints all the elements of a dlistint_t list.'
* Return: h
* @h: dlistint_t  parameter
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

