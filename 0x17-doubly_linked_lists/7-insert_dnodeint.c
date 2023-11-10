#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given
 * position
 * @h: double pointer the points to the first node address
 * @idx: index to insert new node at
 * @n: the value of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (*h == NULL)
	{
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			newNode->next = current;
			newNode->prev = current->prev;
			current->prev->next = newNode;
			current->prev = newNode;
			return (newNode);
		}
		if (current->next == NULL && idx == i + 1)
		{
			newNode->prev = current;
			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
