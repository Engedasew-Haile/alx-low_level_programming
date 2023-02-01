#include <stdio.h>
#include "lists.h"

/*
 * size_t - print_listint - entry list
 * Description: 'the program's description'
 * print_listint - description prints all the elements of a listint_t
 * @h: list
 *
 * Return: nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
