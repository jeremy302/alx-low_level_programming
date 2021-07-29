#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a string list
 * @h: a list of strings
 *
 * Return: total number of strings
 */
size_t print_list(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%s\n", h->str == NULL ? "[0] (nil)" : h->str);
	return (len);
}
