#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint linked list
 * @head: points to the list
 *
 * Return: The number of the nodes in the list, or 98 if it fails
 */
int print_listint_safe(const listint_t *head)
{
	const listint_t *arr[50];
	int c = 0;
	int i;
	const listint_t *current = head;

	while (current != NULL)
	{
		for (i = 0; i < c; i++)
		{
			if (current == arr[i])
				return (0);
		}
		printf("%d\n", current->n);
		current = current->next;
		arr[c] = current;
		c++;
	}
	return (c);
}
