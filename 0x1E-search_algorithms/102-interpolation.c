#include "search_algos.h"

/**
 * interpolation_search - performs interpolation search
 * @array: an integer array
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int lo = 0, hi = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);
	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value -  array[lo]));
	while (pos >= lo && pos <= hi)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lo = pos;
		else if (array[pos] > value)
			hi = pos;
		else
			return (pos);
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
					(value -  array[lo]));
	}
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
