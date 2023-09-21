#include "main.h"
#include <stdio.h>

/**
 * _strcpy - the function
 * @dest: the variable to copy to
 * @src: the variable to copy from
 * Return: to trturn dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}