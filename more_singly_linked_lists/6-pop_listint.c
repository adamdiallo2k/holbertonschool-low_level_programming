#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Entry point
 * Description: 'Write a function that frees a list_t list.'
 * Return: nothing
 * @head: listint_t  parameter
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!*head)
		return (0);
	node = *head;
	n = node->n;
	*head = (*head)->next;
	free(node);

	return (n);
}
