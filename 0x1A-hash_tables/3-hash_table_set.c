#include "hash_tables.h"
/**
 * hash_table_set - function to add an element in hash table
 * @ht: variable poimter to the hash table
 * @key:variable key, the key to add
 * @value: the value with the key
 * Return: to return 1 on success and 0 if not successfull
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *copy;
	unsigned long int k, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	for (k = index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = copy;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = copy;
	n->next = ht->array[index];
	ht->array[index] = n;
	return (1);
}
