#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of
 * dlistint_t list
 * @head: double pointer that points to the address of the first node
 * @n: the value of rhe new node
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastNode = *head;
	dlistint_t *newNode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	/* if the list is empty */
	if (*head == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	/* Normal mode */
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = lastNode;
	lastNode->next = newNode;

	return (newNode);
}
