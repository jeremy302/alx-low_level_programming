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
	int i = 0, j = 0, **_arr = NULL, *arr = NULL, cc = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* _arr = malloc(sizeof(int *) * height); */
	_arr = malloc((sizeof(int *) * height) + (sizeof(int) * height * width));
	arr = (int *)(_arr + height);
	if (_arr != NULL)
		for (; i < height; i++)
		{
			_arr[i] = arr + (i * width);
			for (j = 0; j < width; j++, cc++)
				_arr[i][j] = 0;
		}
	else
		return (free(_arr), NULL);
	return (_arr);
}
