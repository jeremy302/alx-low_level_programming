#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * @array: an integer array
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: int
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 0, lo = 0, hi = 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (hi < size && array[hi] < value)
	{
		printf("Value checked array[%d] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi *= 2;
	}
	hi = hi >= size ? size - 1 : hi;
	printf("Value found between indexes [%d] and [%d]\n", lo, hi);
	mid = ((hi - lo) / 2) + lo;
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
