#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - Entry point
* Description: 'returnss the number of nth node'
* Return: size_t
* @head: list_t  parameter
* @index: int parameter
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}

	return (NULL);
}
