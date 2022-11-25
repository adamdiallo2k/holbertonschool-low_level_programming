#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_dnodeint - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @head: list_t  parameter
* @n: char parameter
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (!head)
		return (NULL);
	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
