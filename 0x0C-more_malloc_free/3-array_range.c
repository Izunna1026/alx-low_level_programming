#include "main.h"
/**
 * array_range - range of arrays
 * @min: the minimum value
 * @max: the maximum value
 * Return: to return the integar value
 */
int *array_range(int min, int max)
{
	int *reult, i = 0;

	if (min > max)
		return (max);
	result = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (result == NULL)
		return (NULL);
	while (min <= max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
