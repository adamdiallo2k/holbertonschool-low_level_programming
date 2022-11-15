#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_node - Entry point
* Description: 'returns the sum of all its parameters.'
* Return: int
* @head: list_t  parameter
* @str: char parameter
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t **h = &*head; 
	list_t *new = malloc(sizeof(list_t));
	
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*h)
		*h = new;

	while ((*h)->next)
		*h = (*h)->next;

	(*h)->next = new;

	return (new);
}
