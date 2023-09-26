#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: points to the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
