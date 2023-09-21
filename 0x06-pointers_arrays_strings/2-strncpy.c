#include "main.h"
/**
 *_strncpy - the function to copy string
 * @dest: the first variable
 * @src: the second variable
 * @n: the third variable
 * Return: fuction to return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
