#include"main.h"
/**
 * free_grid - the function
 * @grid: the first variable
 * @height: the second variable
 * Return: to return the variable
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
