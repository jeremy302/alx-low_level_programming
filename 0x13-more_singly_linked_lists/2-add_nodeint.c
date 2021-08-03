#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - creates a node from `n`, and prepends it to `head`
 * @head: double pointer to the head of the node
 * @n: integer to create the node from
 *
 * Return: the node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (free(node), NULL);
	if (node != NULL)
		node->n = n, node->next = *head, *head = node;
	return (node);
}
