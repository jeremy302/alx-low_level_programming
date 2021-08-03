#include "lists.h"

/**
 * insert_nodeint_at_index - creates and inserts a node at a given index
 * @head: double pointer to the head of the list
 * @idx: index to insert the node at
 * @n: the node's values
 *
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *node = malloc(sizeof(listint_t)),
		*next = head != NULL ? *head : NULL, *prev = NULL;

	if (node == NULL || head == NULL)
		return (free(node), NULL);
	node->n = n;
	for (; next != NULL && idx; --idx)
		prev = next, next = next->next;
	if (idx != 0)
		return (free(node), NULL);
	if (prev == NULL)
		*head = node, node->next = next;
	else
		prev->next = node, node->next = next;
	return (node);
}
