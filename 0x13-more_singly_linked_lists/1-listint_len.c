#include "lists.h"

/**
 * listint_len - gets the length of a linked int list
 * @h: head of the list
 *
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
