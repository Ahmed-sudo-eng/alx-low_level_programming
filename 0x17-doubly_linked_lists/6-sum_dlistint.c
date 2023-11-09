#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: a pointer that points to the first node
 *
 * Return: the sum of all data (n) of a liked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
