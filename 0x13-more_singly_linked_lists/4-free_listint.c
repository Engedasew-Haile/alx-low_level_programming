#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *check, *c;

	c = head;
	while (c != NULL)
	{
	check = c->next;
	free(c);
	c = check;
	}
}
