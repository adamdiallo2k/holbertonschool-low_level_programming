#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Entry point
* Description: 'returns the sum of n node'
* Return: size_t
* @head: list_t  parameter
* @idx: unsigned int parameter
* @n: int parameter
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node2 = malloc(sizeof(listint_t));
	listint_t *node = *head;
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
