#include <stdlib.h>
#include <stdio.h>


/**
* free_grid - Entry point
* Description: 'Write a function that returns a pointer'
* Return: s3
* @grid : int parameter
* @height: int height
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
