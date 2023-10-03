#include "main.h"
/**
 * alloc_grid - the function to return 2 dimension arrays
 * @width: the first variable
 * @height: the second variable
 * Return: to return outpur
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		result[j] = malloc(sizeof(int) * width);
		if (result[j] == NULL)
		{
			free(result);
			for (k = 0; k <= height; k++)
				free(result[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			result[j][k] = 0;
	}
	return (result);
}
