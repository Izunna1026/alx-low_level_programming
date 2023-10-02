#include "main.h"
#include <stdio.h>
/**
 * _strstr - function to work
 * @haystack: the first variable to input
 * @needle: the second variable
 * Return: to return haystack
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
