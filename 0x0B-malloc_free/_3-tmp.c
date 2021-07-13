#include <stdlib.h>
#include "holberton.h"

/**
 * 
 * @
 *
 * Return: 
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **_arr = NULL, *arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	(void)arr;
	_arr = malloc (sizeof(int*) * height);
	arr = malloc (sizeof(int) * height * width);
	if (_arr != NULL)
		for (; i < height; i++)
		{
			_arr[i] = malloc(sizeof(int) * width); /*arr + (i * width);*/
			for (j = 0; j < width; j++)
				_arr[i][j] = 0;
		}
	return (_arr);
}
