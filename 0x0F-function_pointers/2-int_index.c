#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the function index
 * @array: the array of figures
 * @size: size of the variable
 * @cmp: the variable
 * Return: to return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) == 1)
					return (i);
			}
		}
	}
	return (-1);
}
