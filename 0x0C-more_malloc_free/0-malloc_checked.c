#include "main.h"
/**
 * malloc_checked - function to check
 * @b: the variable
 * Return: to return result
 */
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
