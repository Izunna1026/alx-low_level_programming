#include "main.h"
/**
 * create_array - working with malloc
 * @size: the first variable
 * @c: the second variable
 * Return: to return arr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		arr[j] = c;
	return (arr);
}
