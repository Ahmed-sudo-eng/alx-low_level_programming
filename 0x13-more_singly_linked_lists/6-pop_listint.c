#include "lists.h"

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
	node_t *temp = *head;

	*head = (*head)->next;
	n = temp->value;
	free(temp);
	return (n);
}
