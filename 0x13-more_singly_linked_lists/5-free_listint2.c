#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees all the node in a list and reset the head to NULL
 * @head: pointer of pointer to a list
 * main - Entry point
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
/* free_listint2: frees all the node in a list and reset the head t*/
{
	listint_t *tmp;

	if (!head)

		return;

	if (*head)
	{
	tmp = *head;
	*head = NULL;
	free_listint(tmp);

	return;
	}

}

/**
 * free_listint - frees all the node in a list.
 * @head: pointer to a list
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
