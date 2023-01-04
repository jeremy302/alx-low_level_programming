#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: an integer array
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, lo = 0, hi = size - 1, mid;

	mid = ((hi - lo) / 2) + lo;
	if (array == NULL)
		return (-1);
	while (hi >= lo)
	{
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
			printf(i == lo ? "%d" : ", %d", array[i]);
		printf("\n");
		if (value < array[mid])
			hi = mid - 1;
		else if (value > array[mid])
			lo = mid + 1;
		else
			return (mid);
		mid = ((hi - lo) / 2) + lo;
	}
	return (-1);
}
