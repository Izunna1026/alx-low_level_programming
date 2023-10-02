#include "main.h"
/**
 * _memcpy - the function to copy to another memory
 * @dest: the variable to copy to
 * @src: the variable to copy from
 * @n: the variable defining the byte
 * Return: to return the variable desr
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
