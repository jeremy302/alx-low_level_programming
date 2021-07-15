#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array with items in the range of min to max
 * @min: start of the range (inclusive)
 * @max: end of the range (inclusive)
 *
 * Return: an array
 */
int *array_range(int min, int max)
{
	int *ptr, *ptr_tmp;

	if (max < min)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1)), ptr_tmp = ptr;
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
		*ptr = min++, ptr += min < max;

	return (ptr_tmp);
}
