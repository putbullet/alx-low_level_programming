#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated grid.
 *         NULL on failure or if width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (height) */
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL); /* Memory allocation failed */

	/* Allocate memory for the columns (width) and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* Memory allocation failed, free previously allocated memory */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

