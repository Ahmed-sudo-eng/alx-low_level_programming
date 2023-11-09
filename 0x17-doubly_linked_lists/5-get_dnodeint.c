#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t
 * linked list
 * @head: a pointer that points to the first node
 * @index: the index of the node we want to retrive
 *
 * Return: the node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
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
