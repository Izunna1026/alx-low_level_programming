#include "main.h"
/**
 * _memset - the function to set character
 * @s: the variable 1
 * @b: the second variable
 * @n: the variable representing the byte
 * Return: to return the first variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
