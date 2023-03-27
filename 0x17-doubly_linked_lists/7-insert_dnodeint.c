#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position test
 * @h: double pointer to head
 * @idx: index of the list where the new node should be added
 * @n: data of new node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
}
