#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: double pointer that points to the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		free(current->n);
		free(current);
		current = current->next;
	}
	*head = NULL;
}
