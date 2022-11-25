#include "hash_tables.h"
/**
* key_index - implementation of the djb2 algorithm
* @key: string used to generate hash value
* @size: unsigned long int
* Return: unsigned long int
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

