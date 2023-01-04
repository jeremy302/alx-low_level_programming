#include <math.h>
#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: an integer array
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int lo = 0, hi = 0, block = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (hi < size && array[hi] < value)
	{
		printf("Value checked array[%d] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi += block;
	}
	printf("Value found between indexes [%d] and [%d]\n", lo, hi);
	for (; lo <= hi && lo < size; lo++)
	{
		printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}
	return (-1);
}
