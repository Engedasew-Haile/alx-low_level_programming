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
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
