#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @h: list_t  parameter
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}

	return (i);

}
