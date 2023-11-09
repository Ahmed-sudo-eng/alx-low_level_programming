#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: a pointer that points to the first node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *tmp = NULL;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
