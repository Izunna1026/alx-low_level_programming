#include "main.h"
/**
 * _strcat - the function to join 2
 * @dest: the first variables
 * @src: the second variables
 * Return: to return the 0;
 */
char *_strcat(char *dest, char *src)
{
	int alen = 0;
	int blen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		alen++;
	for (i = 0; src[i] != '\0'; i++)
		blen++;
	for (i = 0; i <= blen; i++)
		dest[alen + i] = src[i];
	return (dest);
}
