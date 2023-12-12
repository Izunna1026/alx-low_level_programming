#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function of the entry point
 * @s: the variable to input
 * @accept: the second variable
 * Return: to return null
 */
char *_strpbrk(char *s, char *accept)
{
	int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[k] == accept[n])
				return (s + k);
		}
	}
	return (NULL);
}
