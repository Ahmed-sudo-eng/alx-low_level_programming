#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node at index of
 * a dlistint_t linked list
 * @head: a double pointer that points to the memory address of the first node
 * @index: the position of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *nextNode = NULL;
	dlistint_t *prevNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		current->prev = NULL;
		return (1);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	nextNode = current->next;
	prevNode = current->prev;
	prevNode->next = current->next;
	nextNode->prev = current->prev;

	return (1);
}
