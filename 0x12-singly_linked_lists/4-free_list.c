#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: a pointer to the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *last = head;

	while(last != NULL)
	{
		free(last);
		last = last->next;
	}
}
