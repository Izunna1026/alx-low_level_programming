#include "main.h"
/**
 * flip_bits - to return the no of bits
 * @n: the variable n
 * @m: the second variable
 * Return: to return c
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer, c;

	answer = n ^ m;

	for (c = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
			c++;
		answer = answer >> 1;
	}
	return (c);
}
