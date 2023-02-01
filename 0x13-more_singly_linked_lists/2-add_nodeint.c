#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the lis
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);

	node = malloc(sizeof(listint_t));
	if (!node)

		return (0);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);

}
