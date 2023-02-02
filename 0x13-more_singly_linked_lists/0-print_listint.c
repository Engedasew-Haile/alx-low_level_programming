#include "lists.h"

/*
 * size_t print_listi - prints all elements of a linked list
 * @h: linked list of type listint_t to prints
 * main - Entry point
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)/* print_listint: fr and reset the*/
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
