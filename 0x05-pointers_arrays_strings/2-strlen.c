#include "main.h"
/**
 * _strlen - the function
 * @s: the character to define
 * Return: to return 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
