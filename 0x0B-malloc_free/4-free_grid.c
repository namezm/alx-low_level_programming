#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free memory
 *@grid: free
 *@height: height of grid
 *Return: nothing
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
