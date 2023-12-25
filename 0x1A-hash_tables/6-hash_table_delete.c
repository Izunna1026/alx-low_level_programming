#include "hash_tables.h"
/**
 * hash_table_delete - function to delete hash table
 * @ht: hash table variable pointer
 * Return: to return 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nd, *t;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			nd = ht->array[k];
			while (nd != NULL)
			{
				t = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = t;
			}
		}
	}
	free(head->array);
	free(head);
}
