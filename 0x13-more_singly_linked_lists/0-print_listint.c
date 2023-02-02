#include "lists.h"
#include <stdio.h>

/*
 * print_listint - size_t print_listint  listt
 * @h: linked list of type listint_t to prints
 *
 * Return:size of the list
 */
size_t print_listint(const listint_t *h)
/*print_listint - print all element in a list*/
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
