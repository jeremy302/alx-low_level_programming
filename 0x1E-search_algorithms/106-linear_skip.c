#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - performs search on a skip list
 * @list: an integer list
 * @value: value to search for
 *
 * Return: skiplist_t
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lo = list, *hi = list;

	if (list == NULL)
		return (NULL);

	while (hi && hi->n < value)
	{
		lo = hi;
		hi = hi->express;
		if (hi)
			printf("Value checked at index [%lu] = [%d]\n", hi->index, hi->n);
	}
	if (!hi)
		for (hi = lo; hi->next; hi = hi->next)
			continue;
	printf("Value found between indexes [%lu] and [%lu]\n", lo->index, hi->index);
	while (lo)
	{
		printf("Value checked at index [%lu] = [%d]\n", lo->index, lo->n);
		if (lo->n == value)
			return (lo);
		lo = lo->next;
	}
	return (NULL);
}
