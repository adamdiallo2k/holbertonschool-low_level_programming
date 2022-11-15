#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry point
 * Description: 'Write a function that frees a list_t list.'
 * Return: nothing
 * @head: list_t  parameter
 */

void free_list(list_t *head)
{
	if (head)
	{
	while (!head)
	{
	free(head->str);
	head = head->next;
	}
	free(head);
	}
}
