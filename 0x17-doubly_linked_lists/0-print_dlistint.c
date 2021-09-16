#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly-linked list
 * @h: linked list node
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
		printf("%d\n", h->n), ++len, h = h->next;
	return (len);
}
