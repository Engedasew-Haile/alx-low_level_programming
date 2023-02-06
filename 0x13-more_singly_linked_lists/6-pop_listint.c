#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 * pop_listint - text
 * pop_listint - delete the head node and return it's value
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
