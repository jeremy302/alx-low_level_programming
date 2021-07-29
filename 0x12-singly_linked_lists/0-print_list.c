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

	for (; h != NULL; h = h->next, len++, str_len = 0)
	{
		if (h->str != NULL)
			while (h->str[str_len])
				str_len++;
		printf("[%lu] %s\n", str_len, h->str == NULL ? "(nil)" : h->str);
	}
	return (len);
}
