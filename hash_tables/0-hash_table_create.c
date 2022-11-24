#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - Entry point
* Description: 'converts a binary number to an unsigned int..'
* Return: h
* @size: const charb
*/

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *h = malloc(sizeof(hash_table_t));

if (h == NULL)
	return (NULL);

h->size = size;
h->array = malloc(sizeof(hash_node_t *));

return (h);
}
