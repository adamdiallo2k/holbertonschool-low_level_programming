#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry point
 * Description: 'Write a function that frees a list_t list.'
 * Return: nothing
 * @head: listint_t  parameter
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head)
	{
	while (head)
	{
	node = head;
	head = head->next;
	free(node);
	}
	}
}
