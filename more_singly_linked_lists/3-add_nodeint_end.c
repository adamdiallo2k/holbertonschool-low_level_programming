#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_nodeint_end - Entry point
* Description: 'add a new node at the end of a list'
* Return: listint_t
* @head: list_t  parameter
* @n: const int
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
	 h = *head;

	while (h->next)
		h = h->next;

	h->next = new;
	}
	return (new);
}
