#include "main.h"
/**
 * clear_bit - to set the bit to 0
 * @n: the variable n
 * @index: the index point
 * Return: to return 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	k = 1;
	k = k << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = k ^ *n;
	return (1);
}
