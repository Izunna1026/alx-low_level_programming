#include "hash_tables.h"
/**
 * hash_table_get -function to get value associated with key
 * @ht: variable of the pointer to the hash table
 * @key: the key of the value
 * Return: to return the ht otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nd = ht->array[index];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}
