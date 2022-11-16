#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Entry point
* Description: 'returns the len of h'
* Return: size_t
* @head: list_t  parameter
* @index: int parameter
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	if (!head)
		return (0);

	while (!node || index != 0)
	{
		node = node->next;
		index--;
	}

	return (node);
}
