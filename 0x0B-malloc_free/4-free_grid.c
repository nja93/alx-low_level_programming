#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: 2D dimensional array
 * @height: the height
 * @Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
