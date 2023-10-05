#include "main.h"
/**
 * alloc_grid - Function that returns a pointer to a 2D array of integers
 * @width: Row of the 2D array
 * @height: Column of the 2D array
 * Return: Returns a pointer on success; NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
return (grid);
}
