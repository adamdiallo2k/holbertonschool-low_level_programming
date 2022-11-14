#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @h: list_t  parameter
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			h = h->next;
			i++;
		}

		else
		{
			h = h->next;
			i++;
		}
	}

	return (i);
}
