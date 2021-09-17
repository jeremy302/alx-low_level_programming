#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node into a doubly-linked list
 * @h: head of the node
 * @idx: index to insert the node
 * @n: node's value
 *
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *node = malloc(sizeof(dlistint_t)),
		*next = h != NULL ? *h : NULL, *prev = NULL;

	if (node == NULL || h == NULL)
		return (free(node), NULL);
	node->n = n, node->prev = NULL;
	for (; next != NULL && idx; --idx)
		prev = next, next = next->next;
	if (idx != 0)
		return (free(node), NULL);
	if (prev == NULL)
	{
		*h = node, node->next = next;
		if (next != NULL)
			next->prev = node;
	}
	else
	{
		prev->next = node, node->next = next;
		node->prev = prev;
		if (next != NULL)
			next->prev = node;
	}
	return (node);
}
