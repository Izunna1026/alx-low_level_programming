#include "main.h"
/**
 * set_bit - to set the 1 or 0
 * @n: the variable n
 * @index: the inex no
 * Return: to return 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	k = 1;
	k = k << index;
	*n = ((*n) | k);
	return (1);
}
