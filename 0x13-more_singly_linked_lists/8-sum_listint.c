#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: points to the list
 *
 * return: The sum of all the data (n) or (0) if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
