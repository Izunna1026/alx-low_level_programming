#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - the function to call
 *@dest: the first variable
 *@src: the second variable
 *@n: the 3rd variable
 *Return: to return zero
 */
char *_strncat(char *dest, char *src, int n)
{
	int alen = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[alen + i] = *src;
		src++;
	}
	dest[alen + i] = '\0';
	return (dest);
}
