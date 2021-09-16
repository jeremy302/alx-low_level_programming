#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly-linked list
 * @head: head of the list
 * @n: value of the node
 *
 * Return: the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *node = malloc(sizeof(dlistint_t) * 1);

	node->n = n, node->prev = NULL, node->next = NULL;
	if (head == NULL || node == NULL)
		return (free(node), NULL);
	if (*head == NULL)
		return (*head = node);
	current = *head;
	while (current->next != NULL)
		current = current->next;
	if (*head != node)
		current->next = node, node->prev = current;
	return (node);
}
