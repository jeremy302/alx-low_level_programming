#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a linked integer list
 * @head: double pointer to the head of the list
 *
 * Return: the integer (`n`) of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *h;

	if (head != NULL && *head != NULL)
		n = (*head)->n, h = *head, *head = (*head)->next, free(h);
	return (n);
}
