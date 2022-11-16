#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - Entry point
* Description: 'returns the sum of n node'
* Return: size_t
* @head: list_t  parameter
*/

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int count = 0;

	while (node)
	{
		count += node->n;
		node = node->next;
	}
	return (count);
}
