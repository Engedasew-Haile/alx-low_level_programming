#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: linked list of type listint_t to prin
 * Return: number of nod.
 */

size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
