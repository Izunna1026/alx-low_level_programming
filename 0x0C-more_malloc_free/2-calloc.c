#include "main.h"
/**
 * _calloc - the function to allocate
 * @nmemb: the first variable
 * @size: the size to allocate
 * Return: to return result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
