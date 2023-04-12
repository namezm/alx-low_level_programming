#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid
 *@grid: width of grid
 *@height: height of grid
 *Return: 1
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
