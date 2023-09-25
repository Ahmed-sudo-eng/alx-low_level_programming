#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: points to the linked list
 *
 * Return: The number of nodes
 */
int print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int nodes_number = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes_number++;
	}

	return (nodes_number);
}

