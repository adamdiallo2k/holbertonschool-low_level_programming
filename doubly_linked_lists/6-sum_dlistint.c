#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - Entry point
* Description: 'returns the sum of n node'
* Return: int
* @head: list_t  parameter
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int count = 0;

	while (node)
	{
		count += node->n;
		node = node->next;
	}
	return (count);
}
