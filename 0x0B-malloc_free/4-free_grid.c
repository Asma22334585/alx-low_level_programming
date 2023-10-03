#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid-  frees a 2 dimensional grid
 * @grid:  2 dimensional grid
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
