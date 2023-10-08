#include "main.h"
#include <stdlib.h>

/**
  * _realloc - the function to reallocate
  * @ptr: the first variable
  * @old_size: the variable of the old size
  * @new_size: the variable of the new size to reallocate
  * Return: return the variable
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		result = malloc(new_size);

		if (result == NULL)
			return (NULL);

		return (result);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	result = malloc(new_size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		result[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (result);
}
