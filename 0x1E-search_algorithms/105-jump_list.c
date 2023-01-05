#include <math.h>
#include "search_algos.h"

/**
 * jump_list - performs jump search on a linked list
 * @list: an integer list
 * @size: size of `array`
 * @value: value to search for
 *
 * Return: listint_t
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int i, block = sqrt(size);
	listint_t *lo = list, *hi = list, _hi;

	if (list == NULL || size == 0)
		return (NULL);

	while (hi && hi->index < size && hi->n < value)
	{
		lo = hi;
		for (i = 0, _hi = hi; i < block && hi; i++)
			_hi = hi->next ? hi->next : hi, hi = hi->next;
		if (hi)
		printf("Value checked at index [%lu] = [%d]\n", _hi->index, _hi->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   lo->index, hi ? hi->index : lo->index + i - 1);
	for (; lo != hi; lo = lo->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", lo->index, lo->n);
		if (lo->n == value)
			return (lo);
	}
	return (NULL);
}
