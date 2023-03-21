#include "lists.h"
/**
 * add_dnodeint- Insert new node at the beginnig last test
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */


<<<<<<< HEAD
=======
	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->prev = NULL;
	new_mem->next = *head;

	if (*head != NULL)
		(*head)->prev = new_mem;
	*head = new_mem;

	return (new_mem);
}
>>>>>>> e904844f6cc4f590da950a6845f7f451a0af3ffd
