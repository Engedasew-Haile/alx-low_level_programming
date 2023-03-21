#include "lists.h"

/**
 * add_dnodeint- Insert new node at the beginnig
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_begnode;

	new_begnode = malloc(sizeof(dlistint_t));

	if (new_begnode == NULL)
		return (NULL);

	new_begnode->n = n;
	new_begnode->prev = NULL;
	new_begnode->next = *head;

	if (*head != NULL)
		(*head)->prev = new_begnode;
	*head = new_begnode;

	return (new_begnode);
}
