#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - pointer to the function
 * @array: the variable
 * @size: variable size of the array
 * @action: pointer to the function
 * Return: Return null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
