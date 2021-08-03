#include "lists.h"

/**
 * sum_listint - gets the sum of all the nodes values
 * @head: the head of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
		sum += head->n, head = head->next;
	return (sum);
}
