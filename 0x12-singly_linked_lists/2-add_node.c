#include "lists.h"
#include <string.h>

/**
 * add_node - adds a string to the linked string list
 * @head: a double pointer to a string node
 * @str: a string to create a node from
 *
 * Return: the node created
 */
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *item = malloc(sizeof(list_t));

	if ((nstr == NULL && str != NULL) || item == NULL)
		return (free(nstr), free(item), NULL);
	item->str = nstr, item->len = 0,
		item->next = head == NULL ? NULL : *head;
	if (str != NULL)
		for (; *str; str++)
			item->len++;
	*head = item;
	return (item);
}
