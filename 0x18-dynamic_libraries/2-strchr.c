#include "main.h"
#include <stddef.h>

/**
 * _strchr - the function to allocate the first occrence
 * @s: the first variable
 * @c: the second variable
 * Return: to return either s or null
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
