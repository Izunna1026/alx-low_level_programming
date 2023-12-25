#include "hash_tables.h"
/**
 * hash_table_print - function to print the hash table
 * @ht:  variable pointer to hash table
 * Return: to return 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int k;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (flag == 1)
				printf(", ");

			nd = ht->array[k];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
