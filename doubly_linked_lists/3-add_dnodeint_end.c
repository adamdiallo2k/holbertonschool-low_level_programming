#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_dnodeint_end - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @head: dlistint_t  parameter
* @n: const int parameter
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
	 h = *head;

	while (h->next)
		h = h->next;

	if (h != NULL)
		h->prev = new;

	h->next = new;
	new->prev = h;
	new->next = NULL;
	}
	return (new);
}
