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
	size_t len = 0, str_len = 0;

	if (h == NULL)
		return (-1);
	for (; h != NULL; h = h->next, len++)
	{
		if (h->str != NULL)
			while (h->str[str_len])
				str_len++;
		printf("[%lu] %s\n", str_len, h->str == NULL ? "(nil)" : h->str);
	}
	return (len);
}
