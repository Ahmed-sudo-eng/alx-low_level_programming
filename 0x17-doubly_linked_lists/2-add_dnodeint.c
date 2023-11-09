#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - a functiont that adds a new node at the beginning of a
 * dlistint_t list
 * @head: double pointer points to the memory address of the first node
 * @n: the value of the new node
 *
 * Return: The address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *) malloc(sizeof(dlistint_t));

	/* If the list is empty */
	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	/* Normal mode */
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	(*head)->prev  = newNode;
	*head = newNode;

	return (newNode);
}
