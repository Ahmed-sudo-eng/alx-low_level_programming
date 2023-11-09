#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position
 * @h: double pointer the points to the first node address
 * idx: index to insert new node at
 * n: the value of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (newNode == NULL)
		return NULL;
	while (current != NULL)
	{
		if (i == idx)
		{
			newNode->n = n;
			newNode->next = current;
			newNode->prev = current->prev;
			current->prev->next = newNode;
			current->prev = newNode;
			break;
		}
		current = current->next;
		i++;
	}
	return (newNode);
}
