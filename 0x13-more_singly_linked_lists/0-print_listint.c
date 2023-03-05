#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: linked list of type listint_t to prin
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
