#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - allocates a 2-dimensional array
 * @width: total columns of the array
 * @height: total rows of the array
 *
 * Return: the array allocated
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **_arr = NULL, *arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	_arr = malloc(1000);
	arr = malloc(5000);
	if (_arr != NULL && arr != NULL)
		for (; i < height; i++)
		{
			_arr[i] = arr + (i * width);
			for (j = 0; j < width; j++)
				_arr[i][j] = 0;
		}
	else
		return (free(_arr), free(arr), NULL);
	return (_arr);
}
