#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position
 * @head: points to the list
 * @idx: index
 * @n: new value
 *
 * Return: The address of the new node or NULL of it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	listint_t *current = *head;
	listint_t *before = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->next = current;
			while (before != NULL)
			{
				if (j == idx - 1)
				{
					before->next = new_node;
					break;
				}
				before = before->next;
				j++;
			}
		}
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	return (new_node);
}
