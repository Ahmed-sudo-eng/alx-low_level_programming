#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a functiont that adds a new node at the beginning of
 * a listint_t list
 * @head: double pointer
 * @n: new value
 *
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
