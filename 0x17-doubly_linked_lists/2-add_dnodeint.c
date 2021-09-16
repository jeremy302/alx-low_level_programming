#include "lists.h"

/**
 * add_dnodeint - adds a node to the head of a doubly-linked list
 * @head: head of the list
 * @n: value to add
 *
 * Return: the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t) * 1);

	if (head == NULL || node == NULL)
		return (free(node), NULL);
	return (node->n = n, node->prev = NULL, node->next = *head, *head = node);
}
