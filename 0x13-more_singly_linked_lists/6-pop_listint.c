#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list
 * @head: double pointer that points to the list
 *
 * Return: The head node's data (n) and (0) if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
