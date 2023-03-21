#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - sums all data of a linked list
 * @head: head of the linked list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
