#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head: points to the list
 * @index: the index of the node
 *
 * Return: a pointer to the node at the specified index  or NULL if the node
 * does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
