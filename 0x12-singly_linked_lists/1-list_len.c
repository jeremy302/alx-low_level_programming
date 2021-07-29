#include "lists.h"

/**
 * list_len - returns the total number of strings
 * @h: a linked string list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
		len++, h = h->next;
	return (len);
}
