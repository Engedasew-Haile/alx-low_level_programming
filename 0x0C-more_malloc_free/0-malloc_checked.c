#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function allocates memory
 * @b: variable to allocate memory for
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == 0)
		exit(98);
	return (k);
}
