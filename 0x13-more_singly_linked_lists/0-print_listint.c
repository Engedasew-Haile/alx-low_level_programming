#include "lists.h"

/*
 * print_listint - prints all the elements of a linked list
 * Description: 'the program's description'
 * print_listint - description prints all the elements of a listint_t
 * @h: linked list of type listint_t to prints
 *
 * Return: number of nodes
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
