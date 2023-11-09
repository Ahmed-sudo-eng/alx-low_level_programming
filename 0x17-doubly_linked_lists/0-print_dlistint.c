#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - afunction that prints all the elements of a dlistint_t list
 * @h: a pointer that points to the first Node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
