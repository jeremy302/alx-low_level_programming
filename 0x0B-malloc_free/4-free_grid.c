#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2-dimensional array
 * @grid: array to free
 * @height: number of rows of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;
	free(*grid);
	free(grid);
}
