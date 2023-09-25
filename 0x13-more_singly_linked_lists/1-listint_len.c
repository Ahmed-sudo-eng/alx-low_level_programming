#include "lists.h"
#include <stddef.h>

/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list
 * @h: points to the linked list
 *
 * Return: The number of elements
 */
int listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int elements_number = 0;

	while (current != NULL)
	{
		current = current->next;
		elements_number++;
	}
	return (elements_number);
}
