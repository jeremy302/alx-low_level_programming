#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - creates a node from `n`, and appends it to `head`
 * @head: a double pointer to the head of the list
 * @n: an integer to create the node from
 *
 * Return: the node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *h;

	if (head == NULL || node == NULL)
		return (free(node), NULL);
	node->next = NULL, node->n = n, h = *head;
	if (h == NULL)
		return (*head = node, node);
	while (h->next != NULL)
		h = h->next;
	if (*head != node)
		h->next = node;
	return (node);
}
