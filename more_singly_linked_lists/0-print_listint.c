#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - Entry point
* Description: 'returns the number of nodes'
* Return: size_t
* @h: list_t  parameter
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
