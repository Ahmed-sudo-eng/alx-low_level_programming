#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * dlistint_t list
 * @h: a pointer that points to the first node
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);
}
