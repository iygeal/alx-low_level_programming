#include "main.h"
/**
 * free_grid - Function that frees dynamically allocated memories
 * for grid
 * @grid: The grid
 * @height: The height(i.e. column)
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
