#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked int list
 * @h: the head of the list
 *
 * Return: the length of the list
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	for (; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);
	return (len);
}
