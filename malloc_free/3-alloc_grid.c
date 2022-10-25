#include <stdlib.h>
#include <stdio.h>


/**
* alloc_grid - Entry point
* Description: 'Write a function that returns a pointer'
* Return: s3
* @width: int width
* @height: int height
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int));
	if (grid == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == 0)
	{
		for (j = 0; j < i; j++)
			free(grid[j]);
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}

