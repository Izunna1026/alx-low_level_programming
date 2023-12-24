#include "hash_tables.h"
/**
 * hash_djb2 - this is a function to implement djb2 algorithm
 * @str: function of the string to hash
 * Return: to return the hash calculated
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int k;

	h = 5381;
	while ((k = *str++))
		h = ((h << 5) + h) + k; /* h * 33 + k */

	return (h);
}
