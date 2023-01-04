#include "search_algos.h"

/**
 * advanced_binary - performs advanced binary search
 * @array: an integer array
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	unsigned int i = 0, lo = 0, hi = size - 1, mid;
	int ind = 0;

	if (array == NULL || size == 0)
		return (-1);
	else if (size == 1 && *array == value)
		return (0);

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
		printf(i == lo ? "%d" : ", %d", array[i]);
	printf("\n");

	mid = ((hi - lo) / 2) + lo;
	if (value < array[mid])
		hi = mid - 1;
	else if (value > array[mid])
		lo = mid + 1;
	/* else if (mid && array[mid - 1] == value) */
	/* 	hi = mid; */
	else
		return (mid);

	ind = advanced_binary(array + lo, hi - lo + 1, value);
	return (ind == -1 ? -1 : (int)lo + ind);
}
