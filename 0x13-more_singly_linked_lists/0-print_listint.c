#include <stdio.h>
#include "lists.h"

/*
 * print_listint - print list
 * print_listint - description prints all the elements of a listint_t
 * @h: list
 *
 * Return: size_t
 *
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
