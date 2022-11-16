#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_nodeint - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @head: list_t  parameter
* @n: const int parameter
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (!head)
		return (0);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
