#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - get the first element of a linked list and remove it
 * @head: pointer of a pointer to a listint_t
 * Return: value of the delete node (INT)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *old;

	if (!(head && *head))
		return (0);

	data = (*head)->n;

	old = *head;
	*head = old->next;
	free(old);

	return (data);
}
