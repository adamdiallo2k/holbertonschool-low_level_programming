#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Entry point
* Description: 'returns the sum of n node'
* Return: size_t
* @h: dlistint_t  parameter
* @idx: unsigned int parameter
* @n: int parameter
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node2 = malloc(sizeof(dlistint_t));
	dlistint_t *node = *h;
	unsigned int count = 1;


	while (node)
	{
		if (count == idx)
		{
			node2->next = NULL;
			while (node->next)
			{
			node = node->next;
			node2->n = node->n;
			node->n = n;
			n = node2->n;
			}
			node->next = node2;
			return (node);
		}
		node = node->next;
		count++;
	}
	return (NULL);
}
