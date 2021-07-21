#include "function_pointers.h"

/**
 * int_index - finds the index of the element that passes `cmp`
 * @array: array to search
 * @size: size of `array`
 * @cmp: test function
 *
 * Return: index of the element found, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
