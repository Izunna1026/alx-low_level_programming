#include "hash_tables.h"
/**
 * key_index - to get an index at instant of key
 * @key: this is the key to get the index
 * size: variable of the array size of the hash table
 * Return: to return the index
 * Description: to use the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
