#include "main.h"
/**
 * get_bit - to get the 1 or 0
 * @n: the variable n
 * @index: the index no
 * Return: to return n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (k = 0; k < index; k++)
		n = n >> 1;
	return (n & 1);
}
