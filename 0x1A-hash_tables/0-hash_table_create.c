#include "hash_tables.h"
/**
 * hash_table_create - to create the hash table
 * @size: variable of the size of the table
 * Return: to retuen NULL on error else pointer to new hash tabe
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int k;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		hash->array[k] = NULL;

	return (hash);
}
