#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list
 * @h: a pointer to the singly linked list list_t
 *
 * Return: the number of elements
 */
int list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
